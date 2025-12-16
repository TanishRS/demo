class Employee:
    def __init__(self, emp_id):
        self.emp_id = emp_id
        self.attendance = {}  # date -> Present / Absent

    def mark_attendance(self, date, status):
        self.attendance[date] = status

    def get_absent_days(self):
        # list comprehension
        return [d for d, s in self.attendance.items() if s == "Absent"]