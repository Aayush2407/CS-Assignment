 #include <stdio.h>
int main() {
	int n,s=0,f=1,x;
	printf("Enter binary number: ");
	scanf("%d",&n);
	while (n>0) 
        {
		x=n%10;
		n/=10;
		x+=(x==0)?1:-1;
		s+=x*f;
		f*=10;
	}
	printf("The one's complement is: %d",s);
	return 0;
}
