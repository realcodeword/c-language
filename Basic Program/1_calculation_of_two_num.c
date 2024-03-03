#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter Number 1 \t:");
    scanf("%d",&num1);

    printf("Enter Number 2 \t:");
    scanf("%d",&num2);

    int sum = num1 + num2;
    int subs = num1 - num2;
    int multi = num1 * num2;
    int divide = num1 / num2;
    int reminder = num1 % num2;

    printf("%d + %d = %d \n",num1,num2,sum);
    printf("%d - %d = %d \n",num1,num2,subs);
    printf("%d X %d = %d \n",num1,num2,multi);
    printf("%d / %d = %d \n",num1,num2,divide);
    printf("%d %% %d = %d \n",num1,num2,reminder);

    return 0;
}