import os
import calendar
import matplotlib.pyplot as plt

from attendance_utils import load_attendance, monthly_report, export_attendance
from employee_class_oop import Employee

# -------- Heatmap --------
def heatmap_data(employee, month, year):
    days = calendar.monthrange(year, month)[1]
    data = [0] * days

    for date, status in employee.attendance.items():
        d = date.split("-")
        if int(d[1]) == month and int(d[0]) == year:
            data[int(d[2]) - 1] = 1 if status == "Present" else 0

    return data


def show_heatmap(employee, month, year):
    data = heatmap_data(employee, month, year)

    plt.figure(figsize=(10, 2))
    plt.imshow([data], cmap="Greens", aspect="auto")
    plt.yticks([])
    plt.xticks(range(len(data)), range(1, len(data) + 1))
    plt.colorbar(label="Attendance")
    plt.title(f"Attendance Heatmap - {employee.emp_id}")
    plt.show()


# -------- MAIN --------
def main():
    BASE_DIR = os.path.dirname(os.path.abspath(__file__))
    CSV_PATH = os.path.join(BASE_DIR, "attendance.csv")

    employees = {}
    load_attendance(CSV_PATH, employees)

    month = 9
    year = 2025

    report = monthly_report(employees, month, year)
    export_attendance(report, "attendance_summary.json")

    for emp_id, data in report.items():
        print(emp_id, data)

    first_employee = next(iter(employees.values()))
    show_heatmap(first_employee, month, year)


if __name__ == "__main__":
    main()