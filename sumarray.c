#include<stdio.h>
int main()
{
    int a[8],sum=0,i;
    printf("ENTER THE VALUES TO SUM");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);

}