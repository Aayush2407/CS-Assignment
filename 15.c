#include <stdio.h>
int main() {
	int n,o=0,f=1;
	printf("Enter the decimal number : ");
	scanf("%d",&n);
	while (n>0) {
		o+=(n%8)*f;
		n/=8;
		f*=10;
	}
	printf("The number in octal is: %d",o);
	return 0;
}