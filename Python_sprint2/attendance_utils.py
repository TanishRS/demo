import csv
import json
from datetime import datetime

# -------- Decorator for validation --------
def validate_entry(func):
    def wrapper(emp, date, status):
        if not emp or not date or status not in ["Present", "Absent"]:
            return
        return func(emp, date, status)
    return wrapper


# -------- Lambda for attendance percentage --------
attendance_percentage = lambda p, t: (p / t) * 100 if t else 0


# -------- CSV Loader --------
def load_attendance(csv_file, employees):
    with open(csv_file, "r") as file:
        reader = csv.DictReader(file)
        for row in reader:
            emp_id = row["emp_id"]
            date = row["date"]
            status = row["status"]

            if emp_id not in employees:
                from employee_class_oop import Employee
                employees[emp_id] = Employee(emp_id)

            employees[emp_id].mark_attendance(date, status)


# -------- Monthly Report --------
def monthly_report(employees, month, year):
    report = {}

    for emp_id, emp in employees.items():
        total = 0
        present = 0

        for date, status in emp.attendance.items():
            d = datetime.strptime(date, "%Y-%m-%d")
            if d.month == month and d.year == year:
                total += 1
                if status == "Present":
                    present += 1

        report[emp_id] = {
            "total_days": total,
            "present_days": present,
            "attendance_percentage": round(attendance_percentage(present, total), 2),
            "absent_days": emp.get_absent_days()
        }

    return report


# -------- Export to JSON --------
def export_attendance(report, filename):
    with open(filename, "w") as file:
        json.dump(report, file, indent=4)