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
    
    {
        printf("SORTED ARRAY");
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
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);

    }
int selected,choosen;
printf("\nSELECT THE NUMBER :");
scanf("\n%d",&selected);
printf("ENTER 1 FOR LESS THAN OR 2 FOR GREATER THAN :");
scanf("%d",&choosen);
if(choosen == 1)
{
    printf("\nTHE VALUE LESSER THAN %d are :",selected);
    for(i=0;a[i] != selected;i++)
    {
    printf("\t %d",a[i]);
    }
}
else if(choosen == 2)
{   
    printf("\nTHE VALUE GREATER THAN %d are :",selected);
    for(i=n-1;a[i] != selected;i--)
    {
    printf("\t %d", a[i]);
    }
    
}
}


