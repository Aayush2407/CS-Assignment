#include <stdio.h>
#include <string.h>
int main() {
	char h[20];
	int i,d=0,s,f=1;
	printf("Enter hexadecimal value: ");
	fgets(h,20,stdin);
	s = strlen(h);
	for(i=s-2;i>=0;i--) {
		if (h[i]>='A' && hex[i]<='F')
			d+=(h[i]-55)*f;
		else 
			d+=(h[i]-48)*f;
		f*=16;
	}
	printf("The number in decimal is: %d",d);
	return 0;
}