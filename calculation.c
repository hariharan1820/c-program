#include <stdio.h>
void operation(int inp1,int inp2,char operator)
{ 
    if(operator =='+')
    {
        printf("sum:%d",inp1+inp2 );
    }
    else if( operator == '-')
    {
        printf("difference:%d",inp1-inp2 );
    }
     else if( operator == '*')
    {
        printf("multiply:%d",inp1*inp2 );
    }
     else if( operator == '/')
    {
        printf("div:%d",inp1/inp2 );
    }
    else
    {
        printf("ERROR:ENTER VALID OPERATION");

    }
    

}
int main()
{
    int input1,input2;
    char operator;
    printf("ENTER THE FIRST VALUE :");
    scanf("%d",&input1);
    printf("ENTER THE SECOND VALUE :");
    scanf("%d",&input2);
    printf("ENTER THE OPERATION :");
    scanf("\n%c",&operator);
    operation(input1,input2,operator);

}