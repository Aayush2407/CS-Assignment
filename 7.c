#include <stdio.h>
int main() {
	int n,s=0,m=1,x,f=0;
	printf("Enter binary number: ");
	scanf("%d",&n);
	while (n>0) {
		x=n%10;
		if (f==0) {
			if (x==1)
				f=1;
			s+=x*m;
			m*=10;
			n/=10;
			continue;
		}
		n/=10;
		x+=(x==0)?1:-1;
		s+=x*m;
		m*=10;
	}
	printf("The two's complement is: %d",s  );
	return 0;
}