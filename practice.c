/*  <<<<<<<<<<W A C P that acepts the marks of 5 subject and finds the sum and percerntage
              marks obtained by the student.>>>>>>>>>*/

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//  float first,second,third,fourth,fifth,sum;
//  float percentage;
//  {
//  printf("Enter the first subject marks : ");
//  scanf("%f",&first);
//  printf("Enter the second subject marks : ");
//  scanf("%f",&second);
//  printf("Enter the third subect marks : ");
//  scanf("%f",&third);
//  printf("Enter the fourth subject marks : ");
//  scanf("%f",&fourth);
//  printf("Enter the fifth subject marks : ");
//  scanf("%f",&fifth);
//  sum = first+second+third+fourth+fifth;
//  printf("The sum of all subject marks is : %f\n",sum);
//  percentage = sum*100/500;
//  printf("The percentage of all subject marks is : %f",percentage);
//  }
// return 0;
// }


/* <<<<<<<<<<W A C P THAT CALCULATES THE SIMPLE INTEREST AND COMPOUND INTEREST. THE PRINCIPAL, AMOUNT,
             RATE of interest and time are entered through the keyword.>>>>>>>>>>*/


# include <stdio.h>
# include <conio.h>
# include <math.h>
int main()
{
 float principal,rate,time,SI,CI,power,amount;
    
    printf("Enter the value of principal : ");
    scanf("%f",&principal);
    printf("Enter the rate(in %%) : ");
    scanf("%f",&rate);
    printf("Enter the time : ");
    scanf("%f",&time);
    SI = (principal*rate*time)/100;
    printf("The simple interest is : %f\n",SI);
    amount = principal*(pow((1+rate/100),(time)));
    printf("The amount is : %f\n",amount);
    CI =amount-principal;
    printf("The compound interest is : %f",CI);
    return 0;
}

              // <<<<<<<<<W A C P TO CALCULATE THE AREA AND CIRCUMFERENCE OF A CIRCLE.>>>>>>>>>>>

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//     float r,dimeter,area;
//     printf("Enter the radius of circle : ");
//     scanf("%f",&r);
//     dimeter = 2*3.14*r;
//     printf("The circumfrence of cicle is : %f\n",dimeter);
//     area = 3.14*r*r;
//     printf("The area of a circle is : %f",area);
//     return 0;
// }

/* <<<<<<<<<W A C P THAT ACCEPTS THE TEMPERATURE IN CENTIGRADE AND CONVERTS INTO FAHRENHEIT 
            USING THE FORMULA C/5 = (F-32)/9.>>>>>>>>>>>*/

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//     float C,F;
//     printf("Enter the centigrade value : ");
//     scanf("%f",&C);
//     F = (9*C+160)/5;
//     printf("The fahrenheit value is : %f",F);
//     return 0;
// }

         /*<<<<<<<< W A C P THAT SWAPS VALUES OF TWO VARIABLES USING A THIRD VARIABLE.>>>>>>>*/

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter the value of a : ");
//     scanf("%d",&a);
//     printf("Enter the value of b : ");
//     scanf("%d",&b);
//     c=a;
//     a=b;
//     b=c;
//     printf("The swaped number are a=%d,b=%d",a,b);
//     return 0;
// }

      /* <<<<W A C P THAT CHECKS WHETHER THE TWO NUMBERS ENTERED BY USER ARE EQUAL OR NOT.>>>>> */


// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//     int a,b;
//     printf("Enter the first number : ");
//     scanf("%d",&a);
//     printf("Enter the second number : ");
//     scanf("%d",&b);
//     if(a==b)
//     {
//         printf("Those number are equal ");
//     }
//     else
//     {
//         printf("Those number are not equal ");
//     }
//     return 0;
// }

                    /*<<<<<<<< W A C P TO FIND GREATEST OF THREE NUMBERS. >>>>>>>>*/

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//     int a,b,c,max,d;
//     printf("Enter the first number : ");
//     scanf("%d",&a);
//     printf("Enter the second number : ");
//     scanf("%d",&b);
//     printf("Enter the third number : ");
//     scanf("%d",&c);
//     if(a>c && a>b)
//     {
//         printf("%d is greater number",a);
//     }
//     else if(b>a && b>c)
//     {
//         printf("%d is greater number",b);
//     }
//     else 
//     {
//         printf("%d is grester number",c);
//     }
    
                    // <<<<<<<<other way for comparing 3 numbers.>>>>>>>>>>

    // max = 0;
    // for(int i=0;i<5;i++){
    // printf("Enter any number \n");
    //   scanf("%d",&d);
    //   if(d>max)
    //    max=d;
    //    else
    //     max= max;
    // }
    // printf("greatest number is: %d",max);
    // return 0;
// }


         // <<<<<<<<W A C P THAT FINDS WEATHER A GIVEN NUMBER IS EVEN OR NOT.>>>>>>>>>

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//     int a;
//     printf("Enter any number : ");
//     scanf("%d",&a);
//     if(a%2 == 0)
//     {
//         printf("The number is even");
//     }
//     else
//     {
//         printf("The number is odd");
//     }
//     return 0;
// }

        //<<<<<<<<<<<   W A C P THAT TELLS WEATHER A GIVEN YEAR IS LIP YEAR OR NOT.>>>>>>>>>

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//     int year;
//     printf("Enter the year : ");
//     scanf("%d",&year);
//     if(year%4 == 0)
//     {
//         printf("This year is lip year");
//     }
//     else
//     {
//         printf("This year is not lip year");
//     }
//     return 0;
// }

  /*<<<<<<<<W A C P THAT ACCEPT MARKS OF FIVE SUBJECTS AND FINDS PERCENTAGE AND PRINT GRADES 
            ACCORDING TO THE FOLLOWING CRITERIA - 
                                    BETWEEN 90-100% ----PRINT'A'
                                    80-90 --------------PRINT'B'
                                    60-80 --------------PRINT'C'
                                    BELOW 60 -----------PRINT'D'*/

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//  float first,second,third,fourth,fifth,sum;
//  float percentage;
//  printf("Enter the first subject marks : ");
//  scanf("%f",&first);
//  printf("Enter the second subject marks : ");
//  scanf("%f",&second);
//  printf("Enter the third subect marks : ");
//  scanf("%f",&third);
//  printf("Enter the fourth subject marks : ");
//  scanf("%f",&fourth);
//  printf("Enter the fifth subject marks : ");
//  scanf("%f",&fifth);
//  sum = first+second+third+fourth+fifth;
//  printf("The sum of all subject marks is : %f\n",sum);
//  percentage = sum*100/500;
//  if(percentage >=90)
//  {
//     printf("%f ",percentage);
//     printf("A");
//  }
//  else if(percentage < 90 && percentage >= 80)
//  {
//     printf("%f ",percentage);
//     printf("B");
//  }
//  else if(percentage < 80 && percentage >= 60)
//  {
//     printf("%f ",percentage);
//     printf("C");
//  }
//  else if(percentage < 60)
//  {
//     printf("%f ",percentage);
//     printf("D");
//  }
// return 0;
// }


/*<<<<<<<W A C P THAT TAKES TWO OPERANDES AND ONE OPERATOR FORM THE USER, PERFORM THE THE OPERATION 
         AND PRINTS THE RUSULT BY USING SWTICH STATEMENT>>>>>>>>>> */

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//       int a,b,c;
//       char choice;
//       printf("Enter the operator(+,-,/,*,%%) : ");
//       scanf("%C",&choice);
//       printf("Enter the value of a : ");
//       scanf("%d",&a);
//       printf("Enter the value of b : ");
//       scanf("%d",&b);
//       switch(choice)
//       {
//       case '+':
//       c = a+b;
//       printf("The sum of numbers is : %d",c);
//       break;
//       case '-':
//       c = a-b;
//       printf("The sub of numbers is : %d",c);
//       break;
//       case '/':
//       c = a/b;
//       printf("The div of numbers is : %d",c);
//       break;
//       case '*':
//       c = a*b;
//       printf("The mul of number is : %d",c);
//       break;
//       case '%':
//       c = a%b;
//       printf("The module of numbers is : %d",c);
//       break;
//       default :
//       printf("Invalid operator");
//       }
//       return 0;
// }


/*<<<<<<<<<<<< W A C P TO PRINT THE SUM OF ALL NUMBERS UP TO A GRIVEN NUMBER.>>>>>>>>>>>>*/

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//       int i,n,sum=0;
//       printf("Enter the any number : ");
//       scanf("%d",&n);
//       for(i=1 ; i<=n ; i++)
//       {
//             printf("%d",i);
//       }
//       printf("\n");
//       for(i=1 ; i<=n ; i++)
//       {
//          sum = sum+i;
//       }
//       printf("The sum of all number is : %d",sum);
//       return 0;
// }

    /* <<<<<<<<<<<<<<<<<<<<W A C P TO FIND THE FACTORIAL OF A GIVEN NUMBER.>>>>>>>>>>>>>>>>*/

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//       int fact=1,i,n;
//       printf("Enter any number : ");
//       scanf("%d",&n);
//       for(i=1 ; i<=n ; i++)
//       {
//             fact = fact*i;
//       }
//       printf("The factorial of a number is : %d",fact);
//       return 0;
// }


     /*<<<<<<<<<<<<<<W A C P TO FIND EVEN AND ODD NUMBERS OF A GIVEN NUMBER.>>>>>>>>>>>>*/

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//       int i,a[100],n,even=0,odd=0;
//       printf("Enter the size of array : ");
//       scanf("%d",&n);
//       printf("Enter any number : ");
//       for(i=1 ; i<=n ; i++)
//       {
//             scanf("%d",&a[i]);
//       }
//       for(i=1 ; i<=n ; i++)
//       {
//       if(a[i]%2 == 0)
//       {
//             even++;
//       }
//       else
//       {
//             odd++;
//       }
//       }
//       printf("%d is even\n",even++);
//       printf("%d is odd ",odd++);
//       return 0;
// } 


/*<<<<<<<<<<<<<W A C P TO PRINT SUM OF EVEN AND ODD NUMBERS FROM 1 TO N NUMBERS.>>>>>>>>>>>>*/

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//       int i,n,even_sum = 0,odd_sum = 0;
//       printf("Enter the size of numbers : ");
//       scanf("%d",&n);
//       for(i=1 ; i<=n ; i++)
//       {
//             if(i%2 == 0)
//             {
//                   even_sum = even_sum + i;
//             }
//             else
//             {
//                   odd_sum = odd_sum + i;
//             }
//       }
//       printf("The sum even numbers is : %d\n",even_sum);
//       printf("The sum odd numbers is : %d",odd_sum);
//       return 0;
// }


   /*<<<<<<<<<<<<<<<<<<<<<<<W A C P TO PRINT THE FIBONACCI SERIES.>>>>>>>>>>>>>>>>>>>>>*/

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//       int n,first=0,second=1,next,i;
//       printf("Enter the numbers of terms : ");
//       scanf("%d",&n);
//       for(i=0 ; i<n ; i++)
//       {
//             if(i<=1)
//             {
//                   next = i;
//             }
//             else
//             {
//                   next = first + second;
//                   first = second;
//                   second = next;
//             }
//             printf("%d",next);
//       }
//       return 0;
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


/*<<<<<<<<<<<<<<<<<<W A C P TO FIND THE SUM OF DIGIT OF THE ENTERED NUMBER.>>>>>>>>>>>>>>>>>*/


// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//       int rem,t,n,sum=0;
//       printf("Enter any number : ");
//       scanf("%d",&n);
//       t=n;
//       while(t != 0)
//       {
//           rem = t%10;
//           sum = sum+rem;
//           t = t/10;
//       }
//       printf("The sum of digit is : %d\n\n",sum);
//       return 0;
// }


  /*<<<<<<<<<<<<<<<<<<<<W A C P TO FIND THE REVERSE OF A NUMBER.>>>>>>>>>>>>>>>>>>>>>>>> */

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//       int rev=0,rem,t,n;
//       printf("Enter any number : ");
//       scanf("%d",&n);
//       t=n;
//       while(t != 0)
//       {
//             rem = t%10;
//             rev = rev*10+rem;
//             t = t/10;
//       }
//       printf("The reverse of a number : %d",rev);
//       return 0;
// }


/*<<<<<<<<<<<<<<<<<<< W A C P TO PRINT ARMSTRONG NUMBERS FROM 1 TO 100.>>>>>>>>>>>>>>>>>>>>*/


// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//       int n, t, rem, sum=0;
//     printf("Armstrong numbers between 1 and 100 are:\n");
//     for(n=1 ; n<=100 ; n++)
//     {
//       t=n;
//       while(t>0)
//       {
//             rem = t%10;
//             sum = sum+(rem*rem*rem);
//             t = t/10;
//       }
//       if(n==sum)
//       {
//       printf("%d ",n);
//       }
//     }
//     return 0;
// }


/*<<<<<<<<<<<<<<< W A C P TO CONVERT BINARY NUMBER INTO DECIMAL NUMBER AND VICE VERSA.>>>>>>>>>>>>>>>>*/


//    BINARY TO DECIMAL  

// #include <stdio.h>
// #include <math.h>

// // function prototype
// int convert(long long);

// int main() {
//   long long n;
//   printf("Enter a binary number: ");
//   scanf("%lld", &n);
//   printf("%lld in binary = %d in decimal", n, convert(n));
//   return 0;
// }

// // function definition
// int convert(long long n) {
//   int dec = 0, i = 0, rem;

//   while (n!=0) {
//     rem = n % 10;
//     n /= 10;
//     dec += rem * pow(2, i);
//     ++i;
//   }

//   return dec;
// }

//DECIMAL TO BINARY 

// #include <stdio.h>
// int main() 
// {
//     int a[10], number, i, j;
//     printf("Enter any Number : ");
//     scanf("%d", &number);    
//     for(i = 0; number > 0; i++)
//     {
//         a[i] = number % 2;
//         number = number / 2;
//     }   
//     printf("Binary Number of given number is : ");
//     for(j = i - 1; j >= 0; j--)  {
//         printf(" %d ", a[j]);
//     }
//     printf("\n");
//     return 0;
// }

// # include <stdio.h>
// # include <conio.h>
// int main()
// {
//     int fact=1,n,i;
//     printf("Enter any number : ");
//     scanf("%d",&n);
//     i = n;
//     for(i=1 ; i<=n ; i++)
//     {
//         fact = fact*i;
//     }
//     printf("The factorial of number is : %d",fact);
//     return 0;

// }
