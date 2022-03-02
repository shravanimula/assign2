#include<stdio.h>
#define area l*w
int area_rect(int l,int w)
{
	int a;
	a=area;
	return a;
	//return area;
}
int main()
{
	int l,w,rectangle_area;
	printf("enter the length and width:");
	scanf("%d %d",&l,&w);
	rectangle_area=area_rect(l,w);
	printf("area of rectangle:%d",rectangle_area);
	return 0;
}

