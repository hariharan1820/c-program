#include<stdio.h>

int main()
{
int a,b,c;
printf("enter the upper limit ");
scanf("%d",&a);
printf("enter the lower limit ");
scanf("%d",&b);
printf("press 1 to find odd 0r 2 to find even :");
scanf("%d",&c);
if(c == 1)
    odd(a,b);
else if(c == 2)
    even(a,b);
return 0;
}

void even(int x,int y)
{
if(x>y)
return;
else
{
x=x+1;
printf("\n%d is even,",x);
even(x+1,y);
}
}

void odd(int x,int y)
{
if(x>y)
return;
else
{
printf("\n%d is odd",x);

odd(x+2,y);
}
}