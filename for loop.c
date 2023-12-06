#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",n);

    int sum;
    for(int i=0;i<=n;i++)
	{
        sum = sum + i;
    }
    printf("Sum is Equal to %d",sum);

    for(int i=n;i>=1;i--)
	{
        printf("%d\n",i);
    }
    return 0;
}
