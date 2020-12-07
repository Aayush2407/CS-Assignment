#include <stdio.h>
int main()
{
int a,n,t,i;
int d[9] = { 2000, 500, 200, 100, 50, 20, 10, 5, 1};
printf("Enter the amount: ");
scanf("%d", &a);
for (i = 0; i < 9; i++)
{
    n = a / d[i];
    if (n)
    { 
        a = a % d[i];
        printf("%d notes of %d = %d \n", n, d[i],n * d[i]);
        t=t+n;
    }
} 
printf("Minumum number of notes are %d",t);
return 0;
}