/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   * */

   #include<stdio.h>
   int main()
   {
    int i,j,space;
    char ch;
    for(i=1; i<=4; i++)
    {
        for(space=4; space>=i; space--)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
            ch++;
        }
        printf("\n");
    }
    for(i=3; i>=1; i--)
    {
        for(space=4; space>=i; space--)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
            ch++;
        }
        printf("\n");
    }
    return 0;
   }