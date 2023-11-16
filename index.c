#include<stdio.h>
int main()
{
    int n,i,j,order,k;
    printf("ENTER THE LENGTH OF ARRAY : ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n ;i++)
    {
        printf("ENTER THE %d value :",i+1);
        scanf("%d",&a[i]);
    }
    printf("ENTER THE VALUE TO FIND INDEX :");
    scanf("%d",&k);
    printf("THE INPUT VALUES ARE :");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);

    }
    printf("\nTHE INDEX VALUE OF %d IS :",k);
    for(i=0; i<n;i++)
    {
        if(a[i]==k)
        {
        printf("%d",i);
        }
    }
    return 0;
}


