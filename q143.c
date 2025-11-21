//Q143: Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[50], topper;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter details (Name Roll Marks):\n");
    for(i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    topper = s[0]; 

    for(i = 1; i < n; i++) {
        if(s[i].marks > topper.marks) {
            topper = s[i];
        }
    }

    printf("\nTopper: %s (Marks: %.2f)\n", topper.name, topper.marks);

    return 0;
}
