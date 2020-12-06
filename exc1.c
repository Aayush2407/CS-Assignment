#include <stdio.h>
int main() {
	int num,dig=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	while (num>0) {
		dig++;
		num/=10;
	}
	printf("There are %d digits in this number.", dig);
	return 0;
}