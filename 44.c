#include <stdio.h>  
int main() {
    int n; 
    float b,t,s;
    printf("Enter the electric units : ");
    scanf("%d",&n);
    if(n<=50)
    { b=n*0.5; 
    }
    else if(n>50 && n<=150)
    { t=n-50;
      b=(50*0.5)+(t*0.75);
    }
    else if(n>150 && n<=250)
    { t=n-150;
      b=(50*0.5)+(100*0.75)+(t*1.2);
    }
    if(n>250)
    { s=n-250;
      s=s*0.2;
    }
    else {
          s=0;}
    b=b+s;
    printf("The electicity bill is %0.2f",b);
    return 0;
}