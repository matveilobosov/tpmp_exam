// student.h
#ifndef STUDENT_H
#define STUDENT_H

#define MAX_NAME_LENGTH 50
#define MAX_GROUP_LENGTH 10
#define MAX_FACULTY_LENGTH 30

typedef struct {
    char name[MAX_NAME_LENGTH];
    char group[MAX_GROUP_LENGTH];
    char faculty[MAX_FACULTY_LENGTH];
    float average_grade;
} Student;

void addStudentToFile(const Student *student);
void printTopStudents(const char *filename);

#endif // STUDENT_H
