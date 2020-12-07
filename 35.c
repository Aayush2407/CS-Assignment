#include <stdio.h>
#include <ctype.h>
int main() {
    int n;
    printf("Enter a number from 1 to 7 \n");
    scanf("%d",&n);
    if(n==1)
    printf("Monday");
    else if(n==2)
    printf("Tueday");
    else if(n==3)
    printf("Wednessday");
    else if(n==4)
    printf("Thursday");
    else if(n==5)
    printf("Friday");
    else if(n==6)
    printf("Saturday");
    else if(n==7)
    printf("Sunday");
    else 
    printf("Invalid Input");
    return 0;
}
