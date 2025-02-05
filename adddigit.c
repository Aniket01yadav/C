# include <stdio.h>
# include <conio.h>
int main()
{
    int n,sum=0,rem,t;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    t = n;
    while(t != 0)
    {
        rem = t%10;
        sum = sum+rem;
        t = t/10;
    }
    printf("The digit addtion is : %d",sum);
    return 0;
}