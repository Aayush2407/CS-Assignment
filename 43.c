#include <stdio.h>  
int main() {
    int s,hra,da,g;
    printf("Enter basic salary : ");
    scanf("%d",&s);
    if(s>20000)
    { hra=s*0.3;
      da=s*0.95;  
    }
    else if(s<=20000 && s>10000)
    { hra=s*0.25;
      da=s*0.9;
    }
    else if(s<=10000)
    { hra=s*0.2;
      da=s*0.8;}
    g=s+da+hra;
    printf("The gross salaray is %d",g);
    return 0;
}
