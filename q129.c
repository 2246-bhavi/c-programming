//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL)
    {
        printf("File not found!");
        return 0;
    }

    while (fscanf(fp, "%d", &num) == 1)
    {
        sum += num;
        count++;
    }

    fclose(fp);

    avg = (count > 0) ? (float)sum / count : 0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
