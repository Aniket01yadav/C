// W A C P to find length of character.

// # include <stdio.h>
// # include <string.h>
// int main()
// {
//     char a[100];
//     int b;
//     printf("Enter your name : ");
//     // gets(a);
//     scanf("%s",&a);
//     printf("your name is : ");
//     puts(a);
//     b = strlen(a);
//     // strcpy(b,a);
//     printf("The entered character are : %d character",b);
//     // printf("%s",b);
//     return 0;

// }  


// W A C P to congrtinate(merging) a program.

# include <stdio.h>
# include <string.h>
int main()
{
    a[100],b[100];
    printf("Enter your first name : ");
    // scanf("%d",&a);  
    gets(a);
    printf("Enter your second name : ");
    gets(b);
    puts(b);
    strcat(a,b);
    printf("%s",a);
    return 0;
}