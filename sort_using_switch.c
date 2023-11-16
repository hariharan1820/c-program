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
    switch(order)
    {
        case 1:
            {
                printf("ASCENDING ORDER");
                for(i=0;i<n;i++)
                {
                    for(j=i+1; j<n; j++)
                    {
                        if(a[j] < a[i])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
                }
                    break;
            }
        case 2:
            {
                printf("DESCENDING ORDER");
                for(i=0; i<n; i++)
                {
                    for(j=i+1; j<n ;j++)
                    {
                        if(a[j] > a[i])
                        {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                         }
                    }
                }
                break;
            }
        default:
            {
                printf("invalid input");
                return 1;
            }
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
     
}
