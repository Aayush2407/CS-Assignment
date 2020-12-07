#include <stdio.h>  
int main() {
    int phy,chem,bio,maths,cs;
    float per;char grade;
    printf("Enter marks for Physics out of 100 :");
    scanf("%d",&phy);
    printf("Enter marks for Chemistry out of 100  :");
    scanf("%d",&chem);
    printf("Enter marks for Biology out of 100 :");
    scanf("%d",&bio);
    printf("Enter marks for Mathematics out of 100 :");
    scanf("%d",&maths);
    printf("Enter marks for Computer out of 100 :");
    scanf("%d",&cs);
    per=(phy+bio+chem+cs+maths)/5;
    if(per>=90)
    { grade='A';}
    else if(per<90 && per>=80)
    { grade='B';}
    else if(per<80 && per>=70)
    { grade='C';}
    else if(per<70 && per>=60)
    { grade='D';}
    else if(per<60 && per>=40)
    { grade='E';}
    else {grade='F';}
    printf("The percentage is %.2f and grade is %c",per,grade);
    return 0;
}