# student-management-system
A console-based C++ program for managing student records

# Student Record Management System (C++)

This is a **console-based C++ program** that manages student records, including roll numbers, marks, class numbers, and grades.  
It allows adding, deleting, and displaying student data with various sorting options.

---

## Features
1. **Generate Random Student Data**
   - Roll Number (1000–1999)
   - Class Number (1–9)
   - Midterm Marks (0–50)
   - Final Marks (0–100)
   - Grade (A, B, C, D, F)

2. **Sorting Options**
   - Ascending & Descending by **Midterm Marks**
   - Ascending & Descending by **Final Marks**
   - Ascending & Descending by **Grades**

3. **Record Management**
   - Add a new student entry (up to 10 records)
   - Delete a student record using roll number

---

## Menu Options
- **1:** Display all records (Ascending by Midterm Marks)  
- **2:** Display all records (Descending by Midterm Marks)  
- **3:** Display all records (Ascending by Final Marks)  
- **4:** Display all records (Descending by Final Marks)  
- **5:** Display all records (Ascending by Grade)  
- **6:** Display all records (Descending by Grade)  
- **7:** Add a new student entry  
- **8:** Delete a student record (by Roll Number)  
- **E / e:** Exit the program  

---

## How to Run
### **Using g++ Compiler**
```bash
g++ main.cpp -o student_system
./student_system

