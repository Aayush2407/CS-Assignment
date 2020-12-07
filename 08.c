#include <stdio.h>
#include <math.h>
int main() {
	int n,o=0,d=0,r,f=1,t,oct=0;
	printf("Enter the binary number : ");
	scanf("%d",&n);
	while (n>0) {
		r=n%1000;
		while (r>0) {
			d+=(r%10)*f;
			r/=10;
			f*=2;
		}
		f=1;
		o=o*10+d;
		d=0;
		n/=1000;
	}
        t=o;
	while (t>0) {
		oct=oct*10+t%10;
		t/=10;
	}
	printf("The number in octal is: %d",oct);
	return 0;
}
