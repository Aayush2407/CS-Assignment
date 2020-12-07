#include <stdio.h>
int main() {
	int n,i=0,x,s=0;
	char hex[20]={0},h[20]={0};
	printf("Enter the decimal number : ");
	scanf("%d",&n);
	while (n>0) {
		x=n%16;
		if (x>9)
			h[i]=x+55;
		else
			h[i]=x+48;
		i++;
		n/=16;
		s++;
	}
	for(i=0;i<s;i++)
		hex[i]=h[s-i-1];
	printf("The number in hexadecimal is: %s",hex);
	return 0;
}