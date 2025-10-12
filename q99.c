//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    char date[11], month[4];
    int day, mon, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &mon, &year);

    switch(mon) {
        case 1:  sprintf(month, "Jan"); break;
        case 2:  sprintf(month, "Feb"); break;
        case 3:  sprintf(month, "Mar"); break;
        case 4:  sprintf(month, "Apr"); break;
        case 5:  sprintf(month, "May"); break;
        case 6:  sprintf(month, "Jun"); break;
        case 7:  sprintf(month, "Jul"); break;
        case 8:  sprintf(month, "Aug"); break;
        case 9:  sprintf(month, "Sep"); break;
        case 10: sprintf(month, "Oct"); break;
        case 11: sprintf(month, "Nov"); break;
        case 12: sprintf(month, "Dec"); break;
        default: sprintf(month, "Err"); break;
    }

    printf("Formatted date: %02d-%s-%04d", day, month, year);

    return 0;
}
