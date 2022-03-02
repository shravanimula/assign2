#include<stdio.h>
#define swaptemp(a,b,temp) temp=a;a=b;b=temp;
#define swap(a,b) a=a+b;b=a-b;a=a-b;
int swap_temp(int a,int b)
{
	int temp;
	swaptemp(a,b,temp);
	printf("in fun tha values after swap:a=%d,b=%d\n",a,b);
}

int swap_without_temp(int a,int b)
{
	swap(a,b);
	printf("in fun tha values after swap:a=%d,b=%d\n",a,b);
}	
int main()
{
	int a,b,temp;
	printf("enter the values a and b:");
	scanf("%d\t%d",&a,&b);
	printf("before the swap:a=%d b=%d\n",a,b);
	swap_temp(a,b);
	printf("after  swap:a=%d b=%d\n",a,b);
	swap_without_temp(a,b);
	printf("after  swap:a=%d b=%d\n",a,b);
}
