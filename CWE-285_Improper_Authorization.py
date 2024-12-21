def is_authorized(user_role): 
    return user_role == 'admin'  
 
class StudentRecords: 
    def __init__(self): 
        self.students = {} 
 
    def add_student(self, student_id, student_data): 
        self.students[student_id] = student_data 
 
    def get_student_data(self, student_id, cookies): 
        if is_authorized(cookies['user_role']): 
            return self.students.get(student_id) 
        else: 
            return "Unauthorized" 
# Simulating the scenario 
system = StudentRecords() 
 
system.add_student(1, { 
    "name": "Jane Smith", 
    "age": 17, 
    "gpa": "3.5" 
}) 
# attempt to access student data 
print(system.get_student_data(1, {'user_role':'user', 'session_id':'55896'})) 
