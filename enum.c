#include<stdio.h>
void area_rect(int l1,int b1)
{
	printf("area of rectangle:%d\n",l1*b1);
}
void area_rect_ref(int *l1,int *b1)
{
	printf("area of rectangle:%d\n",(*l1)*(*b1));
}
void area_sq(int l1)
{
	printf("area of square:%d\n",l1*l1);
}
void area_sq_ref(int *l1)
{
	printf("area of square:%d\n",*l1*(*l1));
}
void even_odd(int n1)
{
	if(n1==0)	
	printf(" neither even nor odd\n");
	else if(n1%2==0)
		printf("%d\n is even",n1);
	else if(n1%2==1)
		printf("%d\n is odd",n1);
}
void even_odd_ref(int *n1)
{
	if(*n1==0)
		printf(" neither even nor odd\n");
	else if(*n1%2==0)
		printf("%d\n is even",*n1);
	else if(*n1%2==1)
     		printf("%d\n is odd",*n1);
}
void fibonacii(int n)
{
	int n1=0,n2=1,n3;    
	printf("%d %d\n",n1,n2);
	for(int i=2;i<n;i++)  
	{    
		n3=n1+n2;    
		printf(" %d\t",n3);    
		n1=n2;    
		n2=n3;    
	}  
}
enum day_fun{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main()
{
    	int c;
        while(1)
	{
	printf("0.rect 1.rect_ref 2.square 3.square_ref 4. checknumber 5.checknumber_ref 6. Fib\n");
 	scanf("%d",&c);
        switch(c)
	{
		case sunday:
			{
			    	int l,b;
				printf("length:\n");
				scanf("%d",&l);
		                printf("breadth:\n");
				scanf("%d",&b);
				area_rect(l,b);
		        }
			break;
		case monday:
		        {
		            int l,b;
		            printf("length:\n");
			    scanf("%d",&l);
			    printf("breadth:\n");
			    scanf("%d",&b);
		            area_rect_ref(&l,&b);
			}
		        break;
		 case tuesday:
			  {
			         int l;
			         printf("length:\n");
			         scanf("%d",&l);
			          area_sq(l);
			   }
			  break;
	       case wednesday:
		          {
		            int l;
		            printf("length:\n");
		            scanf("%d",&l);
		            area_sq_ref(&l);
		           }
			  break;
		 case thursday:
		          {
		            int n;
		            printf("enter a number:\n");
		            scanf("%d",&n);
		            even_odd(n);
		           }
		 	   break;
		 case friday:
		        {
		            int n;
		            printf("enter a number:\n");
		            scanf("%d",&n);
		            even_odd_ref(&n);
		         }
		        break;
		  case saturday:
		        {
		            int n;
		            printf("enter number of digits in fibonacii series to print:\n");
		            scanf("%d",&n);
		            fibonacii(n);
		         }
	}
	
      	}
	return 0;
}
