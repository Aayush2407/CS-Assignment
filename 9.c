#include <stdio.h>
int main() {
	int n,d=0,f=1;
	printf("Enter binary number: ");
	scanf("%d",&n);
	while (n>0)
        {
		d+=(n%10)*f;
		n/=10;
		f*=2;
	}
	printf("The number in decimal is: %d",d);
	return 0;
}