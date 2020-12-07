#include <stdio.h>
int main()
{  int i,j;
  for(i=0;i<5;++i)
   {  printf("\n");
      for(j=0;j<5;++j)
       if(i==2 && j==2)
       printf("0");
       else
       printf("1");
   }
return 0;
}