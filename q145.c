//Q145: Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// function to find topper
struct Student findTopper(struct Student s[], int n) {
    int i, topIndex = 0;

    for(i = 1; i < n; i++) {
        if(s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    return s[topIndex];   // returning the top student's structure
}

int main() {
    struct Student s[3], top;

    int i;
    printf("Enter details of 3 students (Name Roll Marks):\n");

    for(i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    // get topper
    top = findTopper(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d\n",
            top.name, top.roll, top.marks);

    return 0;
}
