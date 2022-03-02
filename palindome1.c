#include<stdio.h>
int rever(int *num);
int main()
{
	int num,temp,a;
	printf("enter a number:");
	scanf("%d",&num);
	temp=num;
	a=rever(&num);
	if(temp==a)
		printf("number is a palindrome:%d\n",temp);
	else
		printf("number is not palindrome:%d\n",temp);
}
int rever(int *num)
{
	int rev=0;
	while(*num)
	{
		rev=rev*10+(*num%10);
		*num=(*num/10);
	}
	return rev;
}
