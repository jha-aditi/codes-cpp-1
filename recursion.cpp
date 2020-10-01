#include<stdio.h>

int main()
{
	int a,p;
	int fac(int n);
	printf("Enter the number");
	scanf("%d",&a);
	p= fac(a);
	printf("factorial is %d",p); 
	
	return 0;
}

int fac(int n)
{
	if(n==1)
	{
	return n;
	}
	else
	return n*fac(n-1);
}
