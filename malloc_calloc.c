#include<stdio.h>
#include<stdlib.h>
int fun_malloc(int *ptr,int);
int fun_calloc(int *ptrr,int);
int main()
{
	int n,choice;
	printf(" enter the number of elements:");
	scanf("%d",&n);
	int *ptr=(int*)malloc(n*sizeof(int));
	int *ptrr=(int*)calloc(n,sizeof(int));
	while(1)
	{
		//printf("enter the number of elements:");
		//scanf("%d",&n);
		printf("1.malloc_fun 2.calloc_fun default.malloc_fun\n");
		printf("enter ur choice\n");
		scanf("%d",&choice);
			switch(choice)
			{
				case 1:label:fun_malloc(ptr,n);break;
				case 2:fun_calloc(ptrr,n);break;
				default:goto label;
			}
	}
}
int fun_malloc(int *ptr,int n)
{
	int i;
	if(ptr==NULL)
	{
		printf("memory not allocated:");
	}
	printf(" enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("elements are:%d\n",*(ptr+i));
		printf("address of elements:%p\n",ptr+i);
	}
	printf("\n");
	for(i=n-1;i>=0;i--)		
	{
		printf("reverse the elements:%d\n",*(ptr+i));
		printf("address of elements:%p\n",ptr+i);
	}
	free(ptr);
}

int fun_calloc(int *ptrr,int n)
{
	int i;
	if(ptrr==NULL)
	{
		printf("memory not allocated:");
	}
	printf(" enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptrr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("elements are:%d\n",*(ptrr+i));
		printf("address of elements:%p\n",ptrr+i);
	}
	printf("\n");
	for(i=n-1;i>=0;i--)		
	{
		printf("reverse the elements:%d\n",*(ptrr+i));
		printf("address of elements:%p\n",ptrr+i);
	}
	free(ptrr);
}

