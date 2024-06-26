// student.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

void addStudentToFile(const Student *student) {
    FILE *file = fopen("students.dat", "ab");
    if (file == NULL) {
        perror("Failed to open file");
        return;
    }
    fwrite(student, sizeof(Student), 1, file);
    fclose(file);
}

void printTopStudents(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Failed to open file");
        return;
    }

    Student student;
    printf("Top students with average grade above 7.5:\n");
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        if (student.average_grade > 7.5) {
            printf("Name: %s\n", student.name);
            printf("Group: %s\n", student.group);
            printf("Faculty: %s\n", student.faculty);
            printf("Average Grade: %.2f\n\n", student.average_grade);
        }
    }
    fclose(file);
}
