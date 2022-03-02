#include<stdio.h>
int rever(int);
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(rever(num)==0)
		printf("number is a palindrome:%d\n",num);
	else
		printf("number is not palindrome:%d\n",num);
}
int rever(int num)
{
	int rev=0,temp;
	temp=num;
	while(num)
	{
		rev=rev*10+num%10;
		num=num/10;
	}
	if(rev==temp)
		return 0;
	else return 1;
}
