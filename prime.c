# include <stdio.h>
# include <conio.h>
int main()
{
    int n,i,count=0,t=10;
    while(t)
    {
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        printf("Numbe is prime");
    }
    else
    {
        printf("Number is not prime");
    }
    t--;
    printf("\n\n");
    }
    return 0;
    
}