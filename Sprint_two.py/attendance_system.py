import csv
import json
from datetime import datetime
import matplotlib.pyplot as plt
import calendar
import os

# ---------------- EMPLOYEE CLASS ----------------
class Employee:
    def __init__(self, emp_id):
        self.emp_id = emp_id
        self.attendance = {}  # date : status (Present/Absent)

    def mark_attendance(self, date, status):
        self.attendance[date] = status

    def get_absent_days(self):
        return [date for date, status in self.attendance.items() if status == "Absent"]


# ---------------- LOAD CSV ----------------
def load_attendance_from_csv(filename):
    employees = {}

    with open(filename, "r") as file:
        reader = csv.DictReader(file)

        for row in reader:
            emp_id = row["emp_id"]
            date = row["date"]
            status = row["status"]

            # Validation
            if not emp_id or not date or status not in ["Present", "Absent"]:
                continue

            if emp_id not in employees:
                employees[emp_id] = Employee(emp_id)

            employees[emp_id].mark_attendance(date, status)

    return employees


# ---------------- MONTHLY REPORT ----------------
def generate_monthly_report(employees, month, year):
    summary = {}

    for emp_id, emp in employees.items():
        total_days = 0
        present_days = 0

        for date, status in emp.attendance.items():
            d = datetime.strptime(date, "%Y-%m-%d")
            if d.month == month and d.year == year:
                total_days += 1
                if status == "Present":
                    present_days += 1

        attendance_rate = (present_days / total_days) * 100 if total_days else 0

        summary[emp_id] = {
            "total_days": total_days,
            "present_days": present_days,
            "attendance_rate": round(attendance_rate, 2),
            "absent_days": emp.get_absent_days()
        }

    return summary


# ---------------- SAVE SUMMARY ----------------
def save_summary_to_json(summary, filename):
    with open(filename, "w") as file:
        json.dump(summary, file, indent=4)


# ---------------- HEATMAP ----------------
def show_attendance_heatmap(employee, month, year):
    days_in_month = calendar.monthrange(year, month)[1]
    heatmap = [0] * days_in_month

    for date, status in employee.attendance.items():
        d = datetime.strptime(date, "%Y-%m-%d")
        if d.month == month and d.year == year:
            heatmap[d.day - 1] = 1 if status == "Present" else 0

    plt.figure(figsize=(10, 2))
    plt.imshow([heatmap], cmap="Greens", aspect="auto")
    plt.yticks([])
    plt.xticks(range(days_in_month), range(1, days_in_month + 1))
    plt.colorbar(label="Attendance")
    plt.title(f"Attendance Heatmap - Employee {employee.emp_id}")
    plt.show()


# ---------------- MAIN ----------------
def main():
    BASE_DIR = os.path.dirname(os.path.abspath(__file__))
    CSV_PATH = os.path.join(BASE_DIR, "attendance.csv")

    employees = load_attendance_from_csv(CSV_PATH)

    month = 9   # September
    year = 2025

    summary = generate_monthly_report(employees, month, year)
    save_summary_to_json(summary, "attendance_summary.json")

    print("Monthly Attendance Summary:")
    for emp_id, data in summary.items():
        print(emp_id, data)

    # Show heatmap for first employee
    first_emp = next(iter(employees.values()))
    show_attendance_heatmap(first_emp, month, year)


if __name__ == "__main__":
    main()