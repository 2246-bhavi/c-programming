//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
#include <string.h>

enum Choice { ADD, SUBTRACT, MULTIPLY };

int main() {
    char op[10];
    int a, b;
    enum Choice c;

    scanf("%s %d %d", op, &a, &b);

    if(strcmp(op, "ADD") == 0)
        c = ADD;
    else if(strcmp(op, "SUBTRACT") == 0)
        c = SUBTRACT;
    else
        c = MULTIPLY;

    switch(c) {
        case ADD:
            printf("%d", a + b);
            break;
        case SUBTRACT:
            printf("%d", a - b);
            break;
        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}
