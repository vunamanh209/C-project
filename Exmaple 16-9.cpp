#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_SUBJECTS 10
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    float scores[MAX_SUBJECTS];
} Student;

void inputStudentData(Student *students, int *numStudents, char subjects[][MAX_NAME_LENGTH], int *numSubjects);
void calculateAverages(Student *students, int numStudents, int numSubjects, float *classAverages);
void displayResults(Student *students, int numStudents, char subjects[][MAX_NAME_LENGTH], int numSubjects, float *classAverages);

int main() {
    Student students[MAX_STUDENTS];
    char subjects[MAX_SUBJECTS][MAX_NAME_LENGTH];
    int numStudents = 0, numSubjects = 0;
    float classAverages[MAX_SUBJECTS] = {0};

    inputStudentData(students, &numStudents, subjects, &numSubjects);
    calculateAverages(students, numStudents, numSubjects, classAverages);
    displayResults(students, numStudents, subjects, numSubjects, classAverages);

    return 0;
}

void inputStudentData(Student *students, int *numStudents, char subjects[][MAX_NAME_LENGTH], int *numSubjects) {
    printf("Enter the number of subjects: ");
    scanf("%d", numSubjects);

    printf("Enter the names of subjects:\n");
    for (int i = 0; i < *numSubjects; i++) {
        scanf("%s", subjects[i]);
    }

    printf("Enter student data (name and scores). Enter 'done' to finish.\n");
    while (*numStudents < MAX_STUDENTS) {
        printf("Student name (or 'done' to finish): ");
        scanf("%s", students[*numStudents].name);
        
        if (strcmp(students[*numStudents].name, "done") == 0) break;

        printf("Enter scores for %s:\n", students[*numStudents].name);
        for (int i = 0; i < *numSubjects; i++) {
            printf("%s: ", subjects[i]);
            scanf("%f", &students[*numStudents].scores[i]);
        }
        (*numStudents)++;
    }
}

void calculateAverages(Student *students, int numStudents, int numSubjects, float *classAverages) {
    for (int i = 0; i < numSubjects; i++) {
        float sum = 0;
        for (int j = 0; j < numStudents; j++) {
            sum += students[j].scores[i];
        }
        classAverages[i] = sum / numStudents;
    }
}

void displayResults(Student *students, int numStudents, char subjects[][MAX_NAME_LENGTH], int numSubjects, float *classAverages) {
    printf("\nStudent Averages:\n");
    for (int i = 0; i < numStudents; i++) {
        float sum = 0;
        printf("%s: ", students[i].name);
        for (int j = 0; j < numSubjects; j++) {
            sum += students[i].scores[j];
            printf("%.2f ", students[i].scores[j]);
        }
        printf("| Average: %.2f\n", sum / numSubjects);
    }

    printf("\nClass Averages:\n");
    for (int i = 0; i < numSubjects; i++) {
        printf("%s: %.2f\n", subjects[i], classAverages[i]);
    }
}
