#include<stdio.h>
int fibo(int n)
{
	int a=0,b=1,c=0,i;
	printf("%d\t",c);
	for(i=1;i<n;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf("%d\t",c);
	}
}
int main()
{
	int num;
	printf("enter anumber:");
	scanf("%d",&num);
	printf("fib=%d\n",fibo(num));
}
