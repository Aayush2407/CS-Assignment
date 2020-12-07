#include <stdio.h>
int main() {
	int oct,o=0,b=0,x,f=1;
	printf("Enter the octal number : ");
	scanf("%d",&n);
	while (n>0) {
		o=o*10+oct%10;
		n/=10;
	}
	printf("The number in binary is: ");
	while (o>0) {
		x=o%10;
		while (x>0) {
			b+=(x%2)*f;
			x/=2;
			f*=10;
		}
		printf("%.3d",b);
		b=0;
		f=1;
		o/=10;
	}
return 0;
}