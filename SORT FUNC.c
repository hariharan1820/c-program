#include<stdio.h>
int main()
{
    int n,i,j,order;
    printf("ENTER THE LENGTH OF ARRAY : ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n ;i++)
    {
        printf("ENTER THE %d value :",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nENTER 1 FOR ASCENDING OR 2 FOR DESCENDING :");
    scanf("%d",&order);
    if(order == 1 )
    { 
        printf("ASCENDING ORDER");
        sort(a,n);
        for(i=0;i<n;i++)
        {
            printf("\n%d",a[i]);
        }
    }
    else if (order == 2 )
    { 
        printf("DESCENDING ORDER");
        sort(a,n);
        for(i=n-1;i>=0;i--)
        {
            printf("\n%d",a[i]);
        }
    }
    return 0;
}

void sort(int *arr,int n)
{   
    int i,j,temp;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1; j<n; j++)
            { 
                if(arr[i] > arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        
}

