// # include<stdio.h>
// # include<conio.h>
// void main()
// {
//     int i,n,fact=1;
//     printf("Enter any number : ");
//     scanf("%d",&n);
//     for(i=1 ; i<=n ; i++)
//     {
//         fact = fact*i;
//     }
//     printf("The fact is : %d",fact);
//     getch();
// }

// # include <stdio.h>
// # include <conio.h>
// void main()
// {
//     int a,b,sum;
//     printf("Enter the value of a : ");
//     scanf("%d",&a);
//     printf("Enter the value of b : ");
//     scanf("%d",&b);
//     sum = a + b;
//     printf("The sum is : %d",sum);
// }

// # include<stdio.h>
// # include<conio.h>
// int fib(int n);
// int main()
// {
//     printf("%d",fibn);
//     return 0;
// }
// int fib(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     if(n==1)
//     {
//         return 1;
//     }
//     int fibnm1 = int fib(n-1);
//     int fibnm2 = int fin(n-2);
//     int fibn = int fibnm1 + int fibnm2;
    
// }


//            <<<<<<<<<<<<<<<<<<<wacp to print 1 to 300 prime numbers.>>>>>>>>>>>>>>>>>>>>>>>

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//     int i,j,n=300;
//     for(i=1 ; i<=n ; i++)
//     {
//         for(j=1 ; j<=n-i ; j--)
//         {
//             if(i%j == 0)
//             {
//                 printf("%d",j);
//             }
//         }
//     }
//     return 0;
// }

// # include <stdio.h>
// # include <conio.h>
// enum abc(x,y,z)
// int main()
// {  
//     int a;
//     a = x+y+z;
//     printf("%d",a);
//     return 0;
// }

// # include <stdio.h>
// enum week(sun = 1,mon,tue,weed,thu,fri,sat)
// int main()
// {
//     int i;
//     for(i=sum ; i<=sat ; i++)
//     {
//         printf("%d\t",i);
//     }
//     return 0;
// }

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//     struct book
//     {
//         char name;
//         float price;
//         int pages;
//     };
//     struct book b1,b2,b3;
//     printf("Enter the 3 book details\n");
//     scanf("%c%f%d",&b1.name,&b1.price,&b1.pages);
//     scanf("%c%f%d",&b2.name,&b2.price,&b2.pages);
//     scanf("%c%f%d",&b3.name,&b3.price,&b3.pages);
//     printf("Book details are\n");
//     printf("%c%f%d",b1.name,b1.price,b1.pages);
//     printf("%c%f%d",b2.name,b2.price,b2.pages);
//     printf("%c%f%d",b3.name,b3.price,b3.pages);
//     return 0;
// }


// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int n,first=0,second=1,next,i;
//     printf("enter the number of terms");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         if(i<=1)
//         {
//             next=i;
//         }
            
//         else
//         {
//            next=first+second;
//            first=second;
//            second=next;
//         }
//            printf("%d ",next);
        
//     }
//     getch();
// }

//             <<<<<<<<<<<<<<<<<   ENUM   >>>>>>>>>>>>>>>>>>>>>>>>

// #include<stdio.h>
// #include<conio.h>
// enum week{sun,mon,tue,wed,thu,fri,sat};
// void main()
// {
//     int i;
//     for(i=sun ; i<=sat ; i++)
//     {
//        printf("%d\t",i);
//     }
//    getch();
// }

// # include<stdio.h>
// # include<conio.h>
// enum abc{x,y,z};
// int main()
// {
//     int a;
//     a = x+y+z;
//     printf("%d",a);
//     return 0;
//  }

// # include<stdio.h>
// # include<conio.h>
// enum year{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,num,dec};
// int main()
// {
//     int i;
//     for(i=1 ; i<=dec ; i++)
//     {
//         printf("%d\t",i);
//     }
//     return 0;
// }

// # include<stdio.h>
// # include<conio.h>
// int main()
// {
//     int a[50],i,j,n,temp;
//     printf("Enter the number of element for the array : ");
//     scanf("%d",&n);
//     printf("Enter the array element : ");
//     for(i = 0 ; i<n ; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Element before bubble short : ");
//     for(i=0 ; i<n ; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     for(i=0 ; i<n-1 ; i++)
//     {
//         for(j=i+1 ; j<n ; j++)
//         {
//             if(a[i]>a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     printf("\nElement after bubble short : ");
//     for(i=0 ; i<n ; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }


// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//     int i,j;
//     for(i=1 ; i<=4 ; i++)
//     {
//         for(j=1 ; j<=5-i ; j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// # include <stdio.h>
// int main()
// {
//     float r,perimeter,area;
//     printf("Enter the radius of circle : ");
//     scanf("%f",&r);
//     perimeter = 2*3.14*r;
//     printf("The perimeter of circle is : %f\n",perimeter);
//     area = 2*3.14*r*r;
//     printf("The area of circle is : %f",area);
//     return 0;
// }

// # include <stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter the value of a : ");
//     scanf("%d",&a);
//     printf("Enter the value of b : ");
//     scanf("%d",&b);
//     printf("Enter the value of c : ");
//     scanf("%d",&c);
//     if(a>b && a>c)
//     {
//         printf("%d is greater number",a);
//     }
//     else if(b>a && b>c)
//     {
//         printf("%d is greater number",b);
//     }
//     else if(c>a && c>b)
//     {
//         printf("%d is greater number",c);
//     }
//     return 0;
// }


// W A C P  to swap to variable using call by value


// # include <stdio.h>
// void swap(int a, int b);
// int main()
// {
//     int a,b;
//     printf("Enter the value of a : ");
//     scanf("%d",&a);
//     printf("Enter the value of b : ");
//     scanf("%d",&b);
//     swap(a,b);
//     return 0;
// }
// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("Value after swap a=%d and b=%d",a,b);
// }

// W A C TO FIND ascii value of any charater 

// # include<stdio.h>
// int main()
// {
//     char in;
//     printf("Enter the any character : ");
//     scanf("%c",&in);
//     printf("%c ascii value is %d ",in,in);
//     return 0;
// }

//  W A C P  to swap to variable using call by refrence

// # include <stdio.h>
// void swap(int *a,int *b);
// int main()
// {
//     int a,b;
//     printf("Enter the value of a : ");
//     scanf("%d",&a);
//     printf("Enter the value of b : ");
//     scanf("%d",&b);
//     swap(&a,&b);
//     return 0;
// }
// void swap(int *a,int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("Value after swap a = %d and b = %d ",*a,*b);
// }

// # include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter the value of a : ");
//     scanf("%d",&a);
//     printf("Enter the value of b : ");
//     scanf("%d",&b);
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     printf("value after swap a = %d & b = %d ",a,b);
//     return 0;
// }


// # include <stdio.h>
// int main()
// {
//     int fact = 1,i,n;
//     printf("Enter the any number : ");
//     scanf("%d",&n);
//     for(i=1 ; i<=n ; i++)
//     {
//         fact = fact*i;
//     }
//     printf("The factorial of a number is : %d",fact);
//     return 0;
// }

// # include <stdio.h>
// int fact(int n);
// int main()
// {
//     int n;
//     printf("Enter the any number : ");
//     scanf("%d",&n);
//     printf("The factorial of a number is  : %d",fact(n));
//     return 0;
// }
// int fact(int n)
// {
//     if(n<=1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n*fact(n-1);
//     }
// }

// W A C P to find fibonacci series

// # include <stdio.h>
// int main()
// {
//     int n,first=0,second=1,next,i;
//     printf("Enter the number of terms : ");
//     scanf("%d",&n);
//     for(i=0 ; i<n ; i++)
//     {
//         if(i<=1)
//         {
//             next = i;
//         }
//         else
//         {
//             next = first+second;
//             first = second;
//             second = next;
//         }
//         printf("%d ",next);
//     }
//     return 0;
// }

// # include <stdio.h>
// int fib(int i);
// int main()
// {
//     int i,n;
//     printf("Enter the number of terms : ");
//     scanf("%d",&n);
//     for(i=0 ; i<n ; i++)
//     {
//         printf("%d ",fib(i));
//     }
//     return 0;
// }
// int fib(int i)
// {
//     if(i == 0)
//     {
//         return 0;
//     }
//     else if(i == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fib(i-1)+fib(i-2);
//     }
// }

// W A C P to check that the given number is palindrome or not. 

// # include<stdio.h>
// int main()
// {
//     int n,t,rev=0,rem;
//     printf("Enter the any number : ");
//     scanf("%d",&n);
//     t=n;
//     while(t != 0)
//     {
//         rem = t%10;
//         rev = rev*10+rem;
//         t = t/10;
//     }
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


//W A C P to check given number is armstrong or not. 


// # include<stdio.h>
// int main()
// {
//     int n,t,sum=0,rem;
//     printf("Enter any number : ");
//     scanf("%d",&n);
//     t=n;
//     while(t != 0)
//     {
//         rem = t%10;
//         sum = sum + rem*rem*rem;
//         t = t/10;
//     }
//     if(n==sum)
//     {
//         printf("Number is armstrong");
//     }
//     else
//     {
//         printf("Number is not armstrong");
//     }
//     return 0;
// }


// switch case

// # include <stdio.h>
// int main()
// {
//     float a,b,c;
//     int choice;
//     printf("Enter any two number : ");
//     scanf("%f%f",&a,&b);
//     printf("Enter your choice : ");
//     scanf("%d",&choice);
//     switch(choice)
//     {
//         case 1:
//         c = a+b;
//         printf("The sum is %f",c);
//         break;
//         case 2:
//         c = a-b;
//         printf("The sub is %f",c);
//         break;
//         case 3:
//         c = a*b;
//         printf("The mul is %f",c);
//         break;
//         case 4:
//         c = a/b;
//         printf("The div is %f",c);
//         break;
//         default :
//         printf("You enter wrong choice");
//     }
//     return 0;
// }

// W A C P TO PRINT N NATURAL NUMBER USING GOTO STATEMENT.

// #include <stdio.h>
// int main()
// {
// 	int count=1;
// 	int n;
// 	printf("Enter the value of n: ");
// 	scanf("%d",&n);
// 	START:
// 	printf("%d ",count);
// 	count++;
// 	if(count<=n)
// 	{
// 		goto START;
// 	}
// 	return 0;
// }

// W A C P to find sum all element of an array and then dispaly it.

// # include <stdio.h>
// int main()
// {
// 	int a[5];
// 	int i,sum=0;
// 	printf("Enter array element : ");
// 	for(i=0 ; i<5 ; i++)
// 	scanf("%d",&a[i]);
// 	for(i=0 ; i<5 ; i++)
// 	{
// 		sum = sum+a[i];
// 	}
// 	printf("The sum of an array is : %d",sum);
// 	return 0;
// }


// W A C P for addition of two matrix and then display it.


// # include<stdio.h>
// int main()
// {
// 	int a[3][3],b[3][3],c[3][3],i,j;
// 	printf("Enter the 1st matrix element : ");
// 	for(i=0 ; i<3 ; i++)
// 	{
// 		for(j=0 ; j<3 ; j++)
// 		{
// 	        scanf("%d",&a[i][j]);
// 		}
// 	}
// 	printf("Enter the 2nd matrix element : ");
// 	for(i=0 ; i<3 ; i++)
// 	{
// 		for(j=0 ; j<3 ; j++)
// 		{
// 		   scanf("%d",&b[i][j]);
// 		}
// 	}
// 	for(i=0 ; i<3 ; i++)
// 	{
// 		for(j=0 ; j<3 ; j++)
// 		{
// 			 c[i][j] = a[i][j]+b[i][j]; 
// 		}
// 	}
// 	printf("The matrix sum is :\n");
// 	for(i=0 ; i<3 ; i++)
// 	{
// 		for(j=0 ; j<3 ; j++)
// 		{
// 			 printf("%2d ",c[i][j]); 
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }


// W A C P to find number of counts even place and odd place numbers in an 1 D array.


// # include <stdio.h>
// int main()
// {
// 	int a[10],i,n,odd=0,even=0;
// 	printf("Enter the size of array : ");
//     scanf("%d",&n);
// 	printf("Enter the array element : ");
// 	for(i=0 ; i<n ; i++)
// 	{
// 	    scanf("%d",&a[i]);
// 	}
// 	for(i=0 ; i<n ; i++)
// 	{
// 		if(a[i]%2 == 0)
// 		{
// 			even++;
// 		}
// 		else
// 		{
// 			odd++;
// 		}
// 	}
// 	printf("%d are even numbers\n",even);
// 	printf("%d are odd numbers",odd);
// 	return 0;
// }


// W A C P to find number of counts even place and odd place numbers in an 2 D array.

// #include <stdio.h>

// int main()
// {
//     int i, j,a[3][3];
//     int even_count = 0, odd_count = 0;
//     printf("Enter matrix element : ");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             scanf("%d",&a[i][j]);
//         } 
//     }
//     printf("The matrix is :\n");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     for (i = 0; i <3 ; i++) 
// 	{
//         for (j = 0; j <3 ; j++) 
// 		{
//             if (a[i][j] % 2 == 0) 
// 			{
//                 even_count++;
//             } 
// 			else 
// 			{
//                 odd_count++;
//             }
//         }
//     }
//     printf("Number of Even Numbers in a Matrix = %d\n", even_count);
//     printf("Number of Odd Numbers in a Matrix = %d", odd_count);

//     return 0;
// }


// W A C P to find lsrgest number in 1 D in an array.


// # include <stdio.h>
// int main()
// {
//     int a[10],i,GN;
//     printf("Enter the any 10 number : ");
//     for(i=0 ; i<10 ; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     GN = a[0];
//     for(i=0 ; i<10 ; i++)
//     {
//         if(a[i] > GN)
//         {
//             GN = a[i];
//         }
//     }
//     printf("Greater number is :  %d",GN);
//     return 0;
// }

// W A C P to find smallest number in 1 D in an array.

// # include <stdio.h>
// int main()
// {
//     int a[10],i,SN;
//     printf("Enter the any 10 number : ");
//     for(i=0 ; i<10 ; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     SN = a[0];
//     for(i=0 ; i<10 ; i++)
//     {
//         if(a[i] < SN )
//         {
//             SN = a[i];
//         }
//     }
//     printf("Smallest number is : %d",SN);
//     return 0;
// }

// W A C P to display the sum of elements of each row in 2 D matrix.

// # include <stdio.h>
// int main()
// {
//     int a[3][3],i,j;
//     int sum;
//     printf("Enter the matrix element : ");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("The matrix is :\n");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0 ; i<3 ; i++)
//     {
//         sum = 0;
//         for(j=0 ; j<3 ; j++)
//         {
//             sum = sum + a[i][j];
//         }
//         printf("The sum of %d row is %d\n",i,sum);
//     }
//     return 0;
// }

// W A C P to display the product of each element of 2 D matrix.

// # include <stdio.h>
// int main()
// {
//     int a[3][3],i,j;
//     printf("Enter the matrix element : ");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("The matrix is :\n");
//      for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// 	int product	=1;
// 	for(i=0 ; i<3 ; i++)
// 	{
// 		for(j=0 ; j<3 ; j++)
// 		{
// 			product	*= a[i][j];
// 		}
	
// 	}
//     printf("The product of each element is : %d",product);
//     return 0;
// }

// W A C P to display the product of element each row in 2 D matrix.

// # include <stdio.h>
// int main()
// {
//     int a[3][3],i,j;
//     printf("Enter the matrix element : ");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("The matrix is :\n");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// 	for(i=0 ; i<3 ; i++)
// 	{
// 	    int product	=1;
// 		for(j=0 ; j<3 ; j++)
// 		{
// 			product	*= a[i][j];
// 		}
//         printf("The product of %d row is %d\n",i,product);
// 	}
//     return 0;
// }

//  wacp to find multiplication of two matrixes in 2D array.

// # include <stdio.h>
// int main()
// {
//     int a[3][3],b[3][3],c[3][3],i,j;
//     int sum,k;
//     printf("Enter 1st matrix element : ");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter the 2nd matrix eleement : ");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("The 1st matrix is :\n");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The 2nd matrix is :\n");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             sum = 0;
//             for(k=0 ; k<3 ; k++)
//             {
//                 sum = sum + a[i][k]*b[k][j];
//             }
//             c[i][j] = sum;
//         }
//     }
//     printf("The matrix multiplication is :\n");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


 /* <<<<<<<<<<W A C P THAT CALCULATES THE SIMPLE INTEREST AND COMPOUND INTEREST. THE PRINCIPAL, AMOUNT,
             RATE of interest and time are entered through the keyword.>>>>>>>>>>*/


// # include <stdio.h>
// # include <conio.h>
// # include <math.h>
// int main()
// {
//  float principal,rate,time,SI,CI,power,amount;
    
//     printf("Enter the value of principal : ");
//     scanf("%f",&principal);
//     printf("Enter the rate(in %%) : ");
//     scanf("%f",&rate);
//     printf("Enter the time : ");
//     scanf("%f",&time);
//     SI = (principal*rate*time)/100;
//     printf("The simple interest is : %f\n",SI);
//     amount = principal*(pow((1+rate/100),(time)));
//     printf("The amount is : %f\n",amount);
//     CI =amount-principal;
//     printf("The compound interest is : %f",CI);
//     return 0;
// }


/*<<<<<<<<<<<<<<<<<W A C P TO CHECK WHETHER THE ENTERED NUMBER IS PRIME OR NOT.>>>>>>>>>>>>>>>>>> */


// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//       int i,count=0,n;
//       printf("Enter any number : ");
//       scanf("%d",&n);
//       for(i=1 ; i<=n ; i++)
//       {
//             if(n%i == 0)
//             {
//                   count++;
//             }
//       }
//       if(count == 2)
//       {
//             printf("Number is prime ");
//       }
//       else 
//       {
//             printf("Number is not prime ");
//       }
// return 0;
// }
 

// W A C P to print digit_addition of a number


// # include <stdio.h>
// int main()
// {
//     int n,sum=0,rem,t;
//     printf("Enter the value of n : ");
//     scanf("%d",&n);
//     t = n;
//     while(t != 0)
//     {
//         rem = t%10;
//         sum = sum+rem;
//         t = t/10;
//     }
//     printf("The digit_addition is %d",sum);
//     return 0;
// }

// W A C P to print reverse of a number 

// # include <stdio.h>
// int main()
// {
//     int n,rev=0,rem,t;
//     printf("Enter the value of n : ");
//     scanf("%d",&n);
//     t = n;
//     while(t != 0)
//     {
//         rem = t%10;
//         rev = rev*10+rem;
//         t = t/10;
//     }
//     printf("The reverseed number is %d",rev);
//     return 0;
// }


// W A C P to find the minimum and maximum element of the array.

// #include <stdio.h>
 
// int main()
// {
//     int a[1000],i,n,min,max;
   
//     printf("Enter size of the array : ");
//     scanf("%d",&n);
 
//     printf("Enter elements in array : ");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
 
//     min=a[0];
//     max=a[0];
//     for(i=1; i<n; i++)
//     {
//         if(min>a[i])
// 		  min=a[i];   
// 		if(max<a[i])
// 		  max=a[i];       
//     }
//     printf("minimum of array is : %d\n",min);
//     printf("maximum of array is : %d",max);
//     return 0;
// }

// W A C P that finds the sum of diadonal element of a m*n matrix

// # include <stdio.h>
// int main()
// {
//     int a[3][3],i,j;
//     int sum =0;
//     printf("Enter the matrix element : ");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("The matrix is :\n");
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0 ; i<3 ; i++)
//     {
//         for(j=0 ; j<3 ; j++)
//         {
//             if(i == j)
//             {
//                 sum = sum+a[i][j];
//             }
//         }
//     }
//     printf("The diagonal sum is : %d",sum);
//     return 0;
// }

// W A C P to impliment strlen(),strcat(),strcpy() using the concept of function.

// # include <stdio.h>
// # include <string.h>
// int main()
// {
//     char a[1000],b[1000];
//     int n;
//     printf("Enter the any string : ");
//     gets(a);
//     n = strlen(a);
//     printf("Length of string %s is %d\n",a,n);
//     strcpy(b,a);
//     printf("string after copying : ");
//     puts(b);
//     strcat(a,b);
//     printf("String after merging : ");
//     puts(a);
//     return 0;
// }


// W A C P to search an element in an array using linear search.


// # include <stdio.h>
// int main()
// {
//     int a[1000],search,i,number;
//     printf("Enter the size of array : ");
//     scanf("%d",&number);
//     printf("Enter %d number :\n",number);
//     for(i=0 ; i<number ; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the number you want to search : ");
//     scanf("%d",&search);
//     for(i=0 ; i<number ; i++)
//     {
//         if(a[i] == search)
//         {
//             printf("%d is present at location %d\n",search,i+1);
//             break;
//         }
//     }
//     if(i == number)
//     {
//         printf("%d is not present in array\n",search);
//     }
//     return 0;
// }

// W A C P to short the element in an array in asending order using bubble short technique.

// # include <stdio.h>
// int main()
// {
//     int a[100],i,n,j,temp;
//     printf("Enter the size of array : ");
//     scanf("%d",&n);
//     printf("Enter the array element : ");
//     for(i=0 ; i<n ; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0 ; i<n ; i++)
//     {
//         for(j=0 ; j<n-i-1 ; j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             }
//         }
//     }
//     printf("Sorted sequence is : ");
//     for(i=0 ; i<n ; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }


//         <<<<<<<<<<<   W A C P THAT TELLS WEATHER A GIVEN YEAR IS LIP YEAR OR NOT.>>>>>>>>>

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//     int year;
//     printf("Enter the any year : ");
//     scanf("%d",&year);
//     if(year%4 == 0)
//     {
//         printf("%d is leap year",year);
//     }
//     else
//     {
//         printf("%d is not leap year",year);
//     }
//     return 0;
// }


// W A C P TO compare the contents of two files and determine wheather thay are same or not.

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     FILE *fp1, *fp2;
//     char ch1, ch2;
//     char file1[100], file2[100];

//     printf("Enter the name of first file: ");
//     scanf("%s", file1);

//     printf("Enter the name of second file: ");
//     scanf("%s", file2);

//     fp1 = fopen(file1, "r");
//     if (fp1 == NULL) {
//         printf("\nCannot open %s\n", file1);
//         exit(1);
//     }

//     fp2 = fopen(file2, "r");
//     if (fp2 == NULL) {
//         printf("Cannot open %s\n", file2);
//         exit(1);
//     }

//     ch1 = getc(fp1);
//     ch2 = getc(fp2);

//     while (ch1 != EOF && ch2 != EOF) {
//         if (ch1 != ch2) {
//             printf("Files are not same\n");
//             exit(1);
//         }

//         ch1 = getc(fp1);
//         ch2 = getc(fp2);
//     }

//     if (ch1 == EOF && ch2 == EOF) {
//         printf("Files are same\n");
//     } else {
//         printf("Files are not same\n");
//     }

//     fclose(fp1);
//     fclose(fp2);

//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// #define MAX_STUDENTS 50
// #define MAX_NAME_LENGTH 50

// struct Student {
//     int rollNumber;
//     char name[MAX_NAME_LENGTH];
//     int marks;
// };

// int main() {
//     struct Student students[MAX_STUDENTS];
//     int i, numStudents;
//     char searchName[MAX_NAME_LENGTH];
//     printf("Enter the number of students (max %d): ", MAX_STUDENTS);
//     scanf("%d", &numStudents);

//     for (i = 0; i < numStudents; i++) {
//         printf("Enter details for student %d:\n", i + 1);
//         printf("Roll number: ");
//         scanf("%d", &students[i].rollNumber);
//         printf("Name :");
//         scanf("%s", students[i].name);
//         printf("Marks: ");
//         scanf("%d", &students[i].marks);
//     }
//     printf("Enter a name to search: ");
//     scanf("%s", searchName);

//     for (i = 0; i < numStudents; i++) {
//         if (strcmp(students[i].name, searchName) == 0) {
//             printf("Roll number: %d\n", students[i].rollNumber);
//             printf("Name: %s\n", students[i].name);
//             printf("Marks: %d\n", students[i].marks);
//         }
//     }
//     return 0;
// }


// W A C P to print 1 to 300 prime numbers using recursion.


// #include <stdio.h>

// int prime(int n) 
// {
//     int i;
//     if (n <= 1) 
//     {
//         return 0;
//     }
//     for (i=2; i*i<=n; i++)
//     {
//         if (n%i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main() {
//     int count = 0,i;
//     for (i=1 ; i<300 ; i++)
//     {
//         if (prime(i))
//         {
//             printf("%d ", i);
//             count++;
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int  i, j, count;
    
//     printf("Prime numbers between 1 and 300 are: \n");
//     for(i = 1; i <= 300; i++)
//     {
//         count = 0;
//         for(j=2 ; j<=i/2 ; j++)
//         {
//             if(i % j == 0) 
//             {
//                 count = 1;
//                 break;
//             }
//         }
//         if(count == 0)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// W A C P for nested structure

// # include <stdio.h>
// struct date
// int main()
// {
//     int day,month,year;
// };
// struct student{
//     int roll_number;
//     char name[50];
//     struct date dob;
// }
// int main()
// {
//     struct student student1;
//     printf("Enter the roll number of student : ");
//     scanf("%d",&student1.roll_number);
//     printf("Enter the name of student : ");
//     scanf("%s",&student1.name);
//     printf("Enter the date of birth of student : ");
//     scanf("%d%d%d"&student1.dob.day,&student1.dob.month,&student.dob.year);
//     printf("\nStudent detail :\n");
//     printf("Roll number : %d\n",student1.roll_number);
//     printf("Name : %s\n",student1.name);
//     printf("Date of birth : %d%d%d\n",student1.dob.day,student1.dob.month,student1.dob.year);
//     return 0;
// }

// #include <stdio.h>

// struct DateOfBirth {
//     int day;
//     int month;
//     int year;
// };

// struct Student {
//     char name[50];
//     int rollNumber;
//     struct DateOfBirth dob;
// };

// int main() {
//     struct Student student1;
    
//     printf("Enter student name: ");
//     fgets(student1.name, 50, stdin);
    
//     printf("Enter student roll number: ");
//     scanf("%d", &student1.rollNumber);
    
//     printf("Enter student date of birth (DD MM YYYY): ");
//     scanf("%d %d %d", &student1.dob.day, &student1.dob.month, &student1.dob.year);
    
//     printf("Student details:\n");
//     printf("Name: %s", student1.name);
//     printf("Roll number: %d\n", student1.rollNumber);
//     printf("Date of birth: %d/%d/%d", student1.dob.day, student1.dob.month, student1.dob.year);
    
//     return 0;
// }


// W A C P for union

// # include <stdio.h>
// # include <string.h>
// union data
// {
//     int i;
//     float f;
//     char str[20];
// };
// int main()
// {
//     union data class;
//     class.i = 10;
//     class.f = 220.5;
//     // strcpy(class.str,"c programing");
//     printf("Enter any string : ");
//     scanf("%s",)
//     printf("\n%d\t",class.i);
//     printf("\n%f\t",class.f);
//     printf("\n%s\t",class.str);
//     return 0;
// }

//              <<<<<<<<<<<Write a program to find the squar root of any number.>>>>>>>>>>>>>>

// # include <stdio.h>
// # include <math.h>
// int main()
// {
//     double a,b;
//     printf("Enter the any number : ");
//     scanf("%lf",&a);
//     // b = sqrt(a);
//     // printf("%f",b);
//     b =pow(a,0.5);
//     printf("%lf",b);
//     return 0 ;
// }

// # include <stdio.h>
// # include <conio.h>
// int
//  main
// ()
// {
//     int a,b;
//               printf                  ("Enter the value of a : ");
//     scanf               ("%d",                                               &a);
         
//          printf(             "Enter the value of b : ");
    
    
//     scanf(                                      "%d"          ,           &b);
//                        a += b;
    
    
    
    
    
//     printf              (                               "The sum is : %d"         ,            a);
// }

// # include <stdio.h>
// int main()
// {
//     enum latter{a,b,c,d=6,f=5};
//     enum latter y = d;
//     printf("%d",y);
//     return 0;
// }

// # include <stdio.h>
// # include <string.h>
// struct student
// {
//     int roll_number;
//     float marks;
//     char name;
// };
// int main()
// {
//     struct student x;
//     printf("Enter roll_number : ");
//     scanf("%d",&roll_number.x);
//     printf("Enter the marks : ");
//     scanf("%f",&marks.x);
//     printf("Enter the name : ");
//     scanf("%s",&name.x);
// }