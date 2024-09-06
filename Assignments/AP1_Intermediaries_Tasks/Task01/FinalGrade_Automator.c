#include <stdio.h>

/*This algorithm was designed to give letters to the respective grades of 5 students x
being sought by enrollment, and based on the individual's final grade, delivery
a concept from D (minor grade), to A (major grade).*/

int main() {
    int registration, i = 0;
    float grade;
    char grade_letter;

    while (i < 5) {
        printf("Enter the student's registration number %d: ", i + 1);
        scanf("%d", &registration);

        // Error handling for grades outside the range [0, 10]
        do {
            printf("Enter the final grade (0 to 10): ");
            scanf("%f", &grade);
            if (grade < 0 || grade > 10) {
                printf("Invalid grade! Please enter again.\n");
            }
        } while (grade < 0 || grade > 10);

        // Assigning grade letters based on the final grade
        if (grade >= 0 && grade <= 4.9) {
            grade_letter = 'D';
        } else if (grade >= 5.0 && grade <= 6.9) {
            grade_letter = 'C';
        } else if (grade >= 7.0 && grade <= 8.9) {
            grade_letter = 'B';
        } else if (grade >= 9.0 && grade <= 10.0) {
            grade_letter = 'A';
        }

        // Displaying the results
        printf("Student %d with registration number %d received a grade: %c\n", i + 1, registration, grade_letter);
        i++;
    }
  
    system("pause");
    return 0;
}
