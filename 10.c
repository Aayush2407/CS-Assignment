#include <stdio.h>
#include <math.h>
int main() {
	int n,d=0,r,f=1,j=0,i=0;
	char h[20]={0},hex[20]= {0};
	printf("Enter the binary number: ");
	scanf("%d",&n);
	while (n>0) {
		r=n%10000;
		while (r>0) {
			d+=(r%10)*f;
			r/=10;
			f*=2;
		}
		if (d>10) 
			d=d+55;
		else 
			d=d+48;
		f=1;
		h[i]=d;
		d=0;
		n/=10000;
		i++;
		j++;
	}
	for(i=0;i<j;i++) 
		hex[i]=h[j-i-1];
	printf("The number in hexadecimal is: %s",hex);
	return 0;
}
