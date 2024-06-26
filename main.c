// main.c
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main() {
    Student student;

    printf("Adding students...\n");
    
    strcpy(student.name, "John Doe");
    strcpy(student.group, "G123");
    strcpy(student.faculty, "Engineering");
    student.average_grade = 8.2;
    addStudentToFile(&student);

    strcpy(student.name, "Jane Smith");
    strcpy(student.group, "G456");
    strcpy(student.faculty, "Science");
    student.average_grade = 7.9;
    addStudentToFile(&student);

    printTopStudents("students.dat");

    return 0;
}
