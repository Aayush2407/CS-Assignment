#include <stdio.h>
int main() {
	int a[10]={0},n;
	printf("Enter the number: ");
	scanf("%d",&n);
	while (n>0)
        {
		a[n%10]++;
		n/=10;
	}
	for(int i=0;i<=9;i++) 
		printf("%d :\t%d\n",i,a[i]);
	return 0;
}
