#include <stdio.h>
int main()
{
    int amount;
    printf("ENTER THE VALUE TO BE DEMONITIZED :");
    scanf("%d",&amount);
    printf("THE DEMONITIZATION OF 500 IS  :%d"  ,amount/500);
    printf("\nTHE DEMONITIZATION OF 200 IS :%d" ,(amount%500)/200);
    printf("\nTHE DEMONITIZATION OF 100 IS :%d" ,((amount%500)%200)/100);
    printf("\nTHE DEMONITIZATION OF 50 IS  :%d" ,(((amount%500)%200)%100)/50);
    printf("\nTHE DEMONITIZATION OF 20 IS  :%d" ,((((amount%500)%200)%100)%50)/20);
    printf("\nTHE DEMONITIZATION OF 10 IS  :%d" ,(((((amount%500)%200)%100)%50)%20)/10);
    printf("\nTHE DEMONITIZATION OF 5 IS   :%d" ,((((((amount%500)%200)%100)%50)%20)%10)/5);
    printf("\nTHE DEMONITIZATION OF 2 IS   :%d" ,(((((((amount%500)%200)%100)%50)%20)%10)%5)/2);
    printf("\nTHE DEMONITIZATION OF 1 IS   :%d" ,((((((((amount%500)%200)%100)%50)%20)%10)%5)%2)/1);

}
