#include <stdio.h>
int main() {
int t,n,a,l,m=10;
	printf("Enter the number: ");
	scanf("%d",&n);
	a=n%10;
	n/=10;
	t=n;
	while (t>0)
        {
		l=t%10;
		t/=10;
	}
	t=l;
	while (n/10>0)
        {
		t+=(n%10)*m;
		n/=10;
		m*=10;
	}
	t+=a*m;
	printf("The new number is %d",t);
	return 0;
}
