//Q147: Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[30];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    printf("Enter Employee Name: ");
    scanf("%s", e1.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter Employee Salary: ");
    scanf("%f", &e1.salary);

    fp = fopen("emp.bin", "wb");
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("emp.bin", "rb");
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Employee Data Read From File ---\n");
    printf("Name   : %s\n", e2.name);
    printf("ID     : %d\n", e2.id);
    printf("Salary : %.2f\n", e2.salary);

    return 0;
}
