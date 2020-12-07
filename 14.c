#include <stdio.h>
int main() {
	int n,b=0,f=1;
	printf("Enter the decimal number : ");
	scanf("%d",&n);
	while (n>0) {
		b+=(n%2)*f;
		n/=2;
		f*=10;
	}
	printf("The number in binary is: %d",b);
	return 0;
}