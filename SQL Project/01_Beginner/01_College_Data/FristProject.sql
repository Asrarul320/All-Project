-- CREATE DATABASE ShantiInstitute;
-- USE ShantiInstitute;




-- CREATE TABLE Departments (
--     dept_id INT PRIMARY KEY AUTO_INCREMENT,
--     dept_name VARCHAR(50) NOT NULL,
--     dept_fees DECIMAL(10, 2) NOT NULL
-- );

-- INSERT INTO Departments (dept_name, dept_fees) VALUES
-- ('BCA Department', 20000),
-- ('Polytechnic Department', 30000),
-- ('B Tech Department', 50000);




-- CREATE TABLE Courses (
--     course_id INT PRIMARY KEY AUTO_INCREMENT,
--     course_name VARCHAR(50) NOT NULL,
--     dept_id INT,
--     duration INT,
--     FOREIGN KEY (dept_id) REFERENCES Departments(dept_id)
-- );

-- INSERT INTO Courses (course_name, dept_id, duration) VALUES
-- ('BCA', 1, 3),
-- ('BBA', 1, 3),
-- ('B-COM', 1, 3),
-- ('MBA', 1, 2),
-- ('BA', 1, 3),
-- ('Polytechnic Civil', 2, 3),
-- ('Polytechnic Mechanical', 2, 3),
-- ('Polytechnic Electrical', 2, 3),
-- ('Polytechnic Computer Science', 2, 3),
-- ('B Tech Civil', 3, 4),
-- ('B Tech Mechanical', 3, 4),
-- ('B Tech Electrical', 3, 4),
-- ('B Tech Computer Science', 3, 4);




-- CREATE TABLE Students (
--     student_id INT PRIMARY KEY AUTO_INCREMENT,
--     name VARCHAR(100),
--     roll_no VARCHAR(50),
--     registration_no VARCHAR(50),
--     phone_no VARCHAR(15),
--     course_id INT,
--     dob DATE,
--     admission_date DATE,
--     fees DECIMAL(10, 2),
--     address VARCHAR(255),
--     FOREIGN KEY (course_id) REFERENCES Courses(course_id)
-- );

-- INSERT INTO Students (name, roll_no, registration_no, phone_no, course_id, dob, admission_date, fees, address) VALUES
-- ('Asrarul haque', 'BCA0022', 'REG001', '9999999999', 1, '2000-01-01', '2024-09-01', 20000, 'Dist-Basti'),
-- ('OM Yadav', 'BCA0052', 'REG002', '8888888888', 1, '2000-02-01', '2024-09-02', 20000, 'Dist-Baghpat'),
-- ('Ashish Yadav', 'BCA0020', 'REG003', '7777777777', 1, '1999-12-10', '2024-09-05', 20000, 'Dist-Baghpat');




-- SELECT * FROM Students; -- all student tabless
-- SELECT * FROM Students WHERE address = 'Dist-Basti'; -- dist wise student table 




-- CREATE TABLE Semesters (
--     semester_id INT PRIMARY KEY AUTO_INCREMENT,
--     course_id INT,
--     semester_number INT,
--     year INT,
--     FOREIGN KEY (course_id) REFERENCES Courses(course_id)
-- );

-- -- Insert semesters for all courses
-- INSERT INTO Semesters (course_id, semester_number, year) VALUES
-- (1, 1, 1), (1, 2, 1), (1, 3, 2), (1, 4, 2), (1, 5, 3), (1, 6, 3),  -- BCA (3 years)
-- (2, 1, 1), (2, 2, 1), (2, 3, 2), (2,4, 2), (2, 5, 3), (2, 6, 3),  -- BBA (3 years)
-- (3, 1, 1), (3, 2, 1), (3, 3, 2), (3, 4, 2), (3, 5, 3), (3, 6, 3),  -- B-COM (3 years)
-- (4, 1, 1), (4, 2, 1), (4, 3, 2), (4, 4, 2),                        -- MBA (2 years)
-- (5, 1, 1), (5, 2, 1), (5, 3, 2), (5, 4, 2), (5, 5, 3), (5, 6, 3),    -- BA (3 years)
-- (6, 1, 1), (6, 2, 1), (6, 3, 2), (6, 4, 2), (6, 5, 3), (6, 6, 3),    -- Polytechnic Civil (3 years)
-- (7, 1, 1), (7, 2, 1), (7, 3, 2), (7, 4, 2), (7, 5, 3), (7, 6, 3),    -- Polytechnic Machanichal (3 years)
-- (8, 1, 1), (8, 2, 1), (8, 3, 2), (8, 4, 2), (8, 5, 3), (8, 6, 3),    -- Polytechnic Electrical (3 years)
-- (9, 1, 1), (9, 2, 1), (9, 3, 2), (9, 4, 2), (9, 5, 3), (9, 6, 3),    -- Polytechnic Computer Science (3 years)
-- (10, 1, 1), (10, 2, 1), (10, 3, 2), (10, 4, 2), (10, 5, 3), (10, 6, 3), (10, 7, 4), (10, 8, 4),  -- B Tech Civil (4 years)
-- (11, 1, 1), (11, 2, 1), (11, 3, 2), (11, 4, 2), (11, 5, 3), (11, 6, 3), (11, 7, 4), (11, 8, 4),  -- B Tech Machanichal (4 years)
-- (12, 1, 1), (12, 2, 1), (12, 3, 2), (12, 4, 2), (12, 5, 3), (12, 6, 3), (12, 7, 4), (12, 8, 4),  -- B Tech Electrical (4 years)
-- (13, 1, 1), (13, 2, 1), (13, 3, 2), (13, 4, 2), (13, 5, 3), (13, 6, 3), (13, 7, 4), (13, 8, 4)  -- B Tech Computer Science (4 years)





-- CREATE TABLE Marks (
--     marks_id INT PRIMARY KEY AUTO_INCREMENT,
--     student_id INT,
--     semester_id INT,
--     math1_marks INT,
--     Programming_Principle_of_Algorithem_marks INT,
-- 	Computer_Fundamental_marks INT,
--     Priciple_of_Management_marks INT,
--     Practical_CFO_marks INT,
--     Bussiness_Communication_marks INT,
--     Practical_PPA_marks INT,
-- 	Envirnmental_Studies_marks INT,
--     total_marks INT GENERATED ALWAYS AS (math1_marks + Programming_Principle_of_Algorithem_marks + Computer_Fundamental_marks + Priciple_of_Management_marks + Practical_CFO_marks + Bussiness_Communication_marks + Practical_PPA_marks) STORED,
--     FOREIGN KEY (student_id) REFERENCES Students(student_id),
--     FOREIGN KEY (semester_id) REFERENCES Semesters(semester_id)
-- );

-- -- Insert dummy marks for students
-- INSERT INTO Marks (student_id, semester_id, math1_marks, Programming_Principle_of_Algorithem_marks, Computer_Fundamental_marks, Priciple_of_Management_marks, Practical_CFO_marks, Bussiness_Communication_marks, Practical_PPA_marks) VALUES
-- (1, 1, 62, 60, 55, 62, 39, 66, 40) -- First student in BCA, Semester 1
