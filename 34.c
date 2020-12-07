#include <stdio.h>
#include <ctype.h>
int main() 
{
    char a;
    printf("Enter a character : ");
    scanf("%c",&a);
    if(isupper(a)!=0)
    {
        printf("The character is UPPERCASE.");
    }
    else {  
           printf("The character is LOWERCASE."); 
         }
    return 0;
}
