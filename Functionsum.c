// # include <stdio.h>
// # include <conio.h>
// int sum (int a, int b);
// void main()
// {
//     int a,b,c;
//     printf("Enter the value of a,b : ");
//     scanf("%d%d",&a,&b);
//     c = sum(a,b);
//     printf("The sum is : %d\n",c);
//     getch();
// }
// int sum(int a , int b)
// {
//     int sum;
//     sum = a+b;
//     return (sum);
// }


// <<<<<<<<<<<< W A C TO FIND LARGEST NUMBER BETWEEN TWO NUMBER USING FUNCTION.>>>>>>>>>>>>>>>>>>


// # include <stdio.h>
// # include <conio.h>
// int large(int a, int b);
// int main()
// {
//     int a,b,c;
//     printf("Enter the value of a : ");
//     scanf("%d",&a);
//     printf("Enter the value of b : ");
//     scanf("%d",&b);
//     c = large(a,b);
//     printf("The largest number is : %d",c);
//     return 0;
// }
// int large (int a , int b)
// {
//     int large;
//     if(a>b)
//     {
//       return a;  
//     }
//     else 
//     {
//         return b;
//     }
// }


// <<<<<<<<<<<<<<<<<<W A C P TO ADDDIGIT OF A NUMBER USING FUNCTION.>>>>>>>>>>>>>>>>>>>>

// # include <stdio.h>
// # include <conio.h>
// int adddigit(int n);
// int main()
// {
//     int n,sum;
//     printf("Enter any number : ");
//     scanf("%d",&n);
//     sum = adddigit(n);
//     printf("The addtion of a number is : %d",sum);
//     return 0;
// }
// int adddigit(int n)
// {
//     int rem,sum=0;
//     while(n != 0)
//     {
//         rem = n%10;
//         sum = sum+rem;
//         n = n%10;
//     }
//     return sum;
// }


// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//     int i=1;
//     do 
//     {
//         printf("%d ",i);
//         i++;
//     }
//     while(i<=5);
//     return 0;
// }

// # include <stdio.h>
// int main()
// {
//     int i;
//     for(i=1 ; i<=5 ; i++)
//     {
//         printf("%d",i);
//     }
//     return 0;
// }

// # include <stdio.h>
// int main()
// {
//     int i,n,sum=0;
//     printf("Enter the any number : ");
//     scanf("%d",&n);
//     for(i=1 ; i<=n ; i++)
//     {
//         sum = sum+i;
//     }
//     printf("The sum of numbers is : %d",sum);
//     return 0;

// }

// # include <stdio.h>
// int main()
// {
//     int i,n,fact=1;
//     printf("Enter the any number : ");
//     scanf("%d",&n);
//     for(i=1 ; i<=n ; i++)
//     {
//         fact = fact*i;
//     }
//     printf("%d",fact);
//     return 0;
// }

// # include <stdio.h>
// int main()
// {
//     int rem,sum=0,t,n;
//     printf("Enter the any number : ");
//     scanf("%d",&n);
//     t = n;
//     while(t != 0)
//     {
//         rem = t%10;
//         sum = sum+rem;
//         t = t/10;
//     }
//     printf("The digit_addition is : %d",sum);
//     return 0;
// }


// # include <stdio.h>
// int main()
// {
//     int n,sum=0,rem,t;
//     printf("Enter the any number : ");
//     scanf("%d",&n);
//     t=n;
//     while(t != 0)
//     {
//         rem = t%10;
//         sum = sum + rem*rem*rem;
//         t = t/10;
//     }
//     if(n == sum)
//     {
//         printf("Number is armstrong");
//     }
//     else
//     {
//         printf("Number is not armstrong");
//     }
//     return 0;
// }

// # include <stdio.h>
// int main()
// {
//     int n,rev=0,rem,t;
//     printf("Enter the any number : ");
//     scanf("%d",&n);
//     t = n;
//     while(t != 0)
//     {
//         rem = t%10;
//         rev = rev*10+rem;
//         t = t/10;
//     }
//     // printf("The reverse number is : %d",rev);
//     if(n == rev)
//     {
//         printf("Number is palindrome");
//     }
//     else 
//     {
//         printf("Number is not palindrome");
//     }
//     return 0;
// }

// # include <stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1 ; i<=5 ; i++)
//     {
//         for(j=5 ; j>=i ; j--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//  # include <stdio.h>
//  int main()
//  {
//      int i,j,k;
//      for(i=1 ; i<=5 ; i++)      /*for rows*/
//      {
//         for(j=1 ; j<5 ; j++)    /*for spaces count*/
//         {
//             printf(" ");
//         }
//      for(k=1 ; k<=i ; k++)  /*for column*/
//         {
//             printf(" *");
//         }
//         printf("\n");
//      }
//      return 0;
//  }



// # include <stdio.h>
// // # include <conio.h>
// int sum(int n);
// int main()
// {
//     int n,add;
//     printf("Enter the any natural number : ");
//     scanf("%d",&n);
//     add = sum(n);
//     printf("The sum is : %d",add);
//     return 0;
// }
//     int sum(int n)
//     {
//         if(n == 0)
//         {
//             return n;
//         }
//         else
//         {
//             return n+sum(n-1);
//         }
//     }


// # include <stdio.h>
// int fact(int i);
// int main()
// {
//     int n,i;
//     printf("Enter any number : ");
//     scanf("%d",&n);
//     i = fact(n);
//     printf("The fact is : %d",i);
//     return 0;
// }
//     int fact(int n)
//     {
//         if(n == 1)
//         {
//             return 1;
//         }
//         else
//         {
//             return n*fact(n-1);
//         }
//     }



// W A C P to print 1 to 300 prime number.

# include <stdio.h>
# include <conio.h>
int main()
{
    int i,j;
    for(i=1 ; i<=300 ; i++)
    {
        for(j=300 ; j<300-i ; j--)
        {
            printf("%d",j);
        }
    }
    return 0;
}