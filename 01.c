#include <stdio.h>
int main() {
	int n,f=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while (n>0)
        {
		f++;
		n/=10;
	}
	printf("There are %d digits in this number.", f);
	return 0;
}
