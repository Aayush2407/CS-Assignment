#include <stdio.h>
#include <string.h>
int main() {
	char h[20];
	int d=0,s,o=0,f=1;
	printf("Enter the hexadecimal value: ");
	fgets(h,20,stdin);
	s = strlen(hex);
	for(int i=s-2;i>=0;i--) {
		if (h[i]>='A' && h[i]<='F')
			d+=(h[i]-55)*f;
		else 
			d+=(h[i]-48)*f;
		f*=16;
	}
	f=1;
	while (d>0) {
		o+=(d%8)*f;
		d/=8;
		f*=10;
	}
	printf("The number in octal is: %d",o);
	return 0;
}