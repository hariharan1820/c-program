#include<stdio.h>
int main()
{
    int n,i,j,order,temp;
    printf("ENTER THE LENGTH OF ARRAY : ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n ;i++)
    {
        printf("ENTER THE %d value :",i+1);
        scanf("%d",&a[i]);
    }
    printf("ENTER 1 FOR ASCENDING OR 2 FOR DESCENDING :");
    scanf("%d",&order);
    if(order ==1 || order==2)
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1; j<n; j++)
            {
                if((order==1)?(a[j] < a[i]) :(a[j] > a[i]))
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    }
    else
    {
        printf("ENTER VALID CHOISE");
        return 1;
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
 
}
