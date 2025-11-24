#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// function that accepts structure as parameter
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s1;

    // taking input
    printf("Enter name, roll and marks:\n");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    // calling function
    display(s1);

    return 0;
}
