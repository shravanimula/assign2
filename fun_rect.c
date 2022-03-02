#include<stdio.h>
int area_rect(int l,int w)
{
	int area;
	area=l*w;
	return area;
}
int area_rect_ref(int *a,int *b)
{
	int area1;
	area1=(*a)*(*b);
	return area1;
}
int main()
{
	int l,w,rectangle_area,ref;
	printf("enter the length and width:");
	scanf("%d %d",&l,&w);
	rectangle_area=area_rect(l,w);
	printf("area of rectangle:%d\n",rectangle_area);
	ref=area_rect_ref(&l,&w);
	printf("area of rectangle in call by reference:%d\n",ref);
	return 0;
}

