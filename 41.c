#include <stdio.h>
int main() 
{
    int sp , cp;
    printf ("Enter cost price of product : ");
    scanf ("%d" , &cp);
    printf ("Enter selliing price of product : ");
    scanf ("%d" , &sp);
    if (sp>cp)
    {        printf ("Profit is Rs. %d" , sp-cp);    }
    else if (cp > sp)
    {        printf ("Loss is Rs. %d" , cp-sp);    }
    else 
    {        printf ("No profit or loss");    }
    return 0;
}