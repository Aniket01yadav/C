// # include<stdio.h>
// # include<conio.h>
// void main()
// {
//     printf("Hello World");
//     getch();
// }

// #include<stdio.h> 
// #include<conio.h> 
// int main( ) 
// { 
// int n, t, rem, sum,count=0;  
// printf("Armstrong numbers between 1 and 1000 are:\n"); 
// for(n=1; n<=1000; n++) 
// { 
// t=n; 
// sum=0; 
// while(t>0) 
// { 
// rem=t%10; 
// sum=sum+(rem*rem*rem); 
// t=t/10; 
// } 
// if(n==sum) 
// { 
// printf("\n%d", n); 
// count++; 
// } 
// } 
// printf("%d",count); 
// getch( ); 
// return 0; 
// } 

# include<stdio.h>
 int main()
 {
    int a,b,sum;
     
     printf("Enter any number : ");
     scanf("%d%d",&a,&b);
     sum = a+b;
     printf("sum = %d",sum);
     return 0;
 }