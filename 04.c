#include <stdio.h>
#include <math.h>
int main() {
	int n,d=0,t=0,x;
	printf("Enter a number: ");
	scanf("%d",&n);
	int zeros=log10(n);
	while (n>0) 
        {
		t=t*10+(n%10);
		n/=10;
	}
	zeros-=log10(t);
	while (t>0) {
		x=t%10;
		if (x==1)
			printf("one ");
		else if (x==2)
			printf("two ");
		else if (x==3)
			printf("three ");
		else if (x==4)
			printf("four ");
		else if (x==5)
			printf("five ");
		else if (x==6)
			printf("six ");
		else if (x==7)
			printf("seven ");
		else if (x==8)
			printf("eight ");
		else if (x==9)
			printf("nine ");
		else if(x==0)
			printf("zero ");
		t/=10;
	}
	
	while (zeros>0) {
		printf("zero ");
		zeros--;
	}
return 0;
}