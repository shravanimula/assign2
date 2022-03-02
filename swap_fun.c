#include<stdio.h>
void swap_withouttemp(int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("in fun swap without temp value:a=%d,b=%d\n",a,b);
}
void swap_temp(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("in fun swap with temp value:a=%d, b=%d\n",a,b);
}
void swap_ref_notemp(int *x, int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	printf("in fun swap no temp with reference value:a=%d,b=%d\n",*x,*y);
}
void swap_ref_temp(int *m, int *n)
{
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
	printf("in fun swap with temp and with reference value:a=%d, b=%d\n",*m,*n);
}
int main()
{
	int a,b;
	printf("enter the values a and b:");
	scanf("%d %d",&a,&b);
	printf("in main before swap:a=%d,b=%d\n",a,b);
	swap_withouttemp(a,b);
	printf("in main after swap  without temp :a=%d,b=%d\n",a,b);
	swap_temp(a,b);
	printf("in main after swap with temp:a=%d,b=%d\n",a,b);
	swap_ref_notemp(&a,&b);
	printf("in main after swap without temp and reference:a=%d,b=%d\n",a,b);
	swap_ref_temp(&a,&b);
	printf("in main after swap with temp:a=%d,b=%d\n",a,b);

}
