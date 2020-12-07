#include <stdio.h>
#include <ctype.h>
int main() {
    int n;
    printf("Enter a number from 1 to 12 \n");
    scanf("%d",&n);
    if(n==1|| n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
    printf("No. of days in the month are 31");
    else if(n==4 || n==6 || n==9 || n==11)
    printf("No. of days in the month are 30");
    else if(n==2)
    printf("No. of days in this month can be 28 or 29");
    else 
    printf("Invalid Input.");
    return 0;
}
