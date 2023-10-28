/*
Write a code that inform the student status according to your average grades. If the average is bigger than 8, the student is passed with distinction. If the
average is bigger than 6, the student is passed. If the average is bigger than 4, the student needs to take the exam. If the average is smaller than 4, the student
is failed.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float grade1, grade2, average;

    printf("Enter your grade 1: ");
    scanf("%f", &grade1);

    printf("Enter your grade 2: ");
    scanf("%f", &grade2);

    average = (grade1 + grade2) / 2;
    printf("The average grade between %.1f and %.1f is %.1f.\n", grade1, grade2, average);

    if (average >= 8) {
        printf("Congratulations...🎉🎉🎉! You passed with distinction...🎉🎉🎉!\n");
    } else if (average >= 6) {
        printf("Congratulations...🎊🎊🎊! But you only passed...🤷‍♂️🤷‍♂️🤷‍♂️!\n");
    } else if (average >= 4) {
        printf("Sorry...😢😢😢! You need to take the exam...😬😬😬!\n");
    } else {
        printf("Oh no...💩💩💩! Try again next year...🤡🤡🤡!\n");
    }
    
    return 0;
}
