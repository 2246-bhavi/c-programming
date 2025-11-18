//Define a struct with enum Gender and print person's gender.


#include <stdio.h>

typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

typedef struct {
    char name[50];
    int age;
    Gender gender;
} Person;

int main() {
    Person p1;
    p1.gender = FEMALE;

    printf("--- Person Information ---\n");
    printf("The internal value stored for gender is: %d\n", p1.gender);

    printf("The person's gender is: ");
    if (p1.gender == MALE) {
        printf("MALE\n");
    } else if (p1.gender == FEMALE) {
        printf("FEMALE\n");
    } else {
        printf("OTHER\n");
    }

    return 0;
}