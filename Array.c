// W A C P TO MUITPLICATION 0F TWO MATRIX

// # include <stdio.h>
// # include <conio.h>
// void main()
// {
//     int k,i,j,m,n;
//     int a[10][10];
//     int b[10][10];
//     int c[10][10];
//     printf("Enter the matrix size : ");
//     scanf("%d%d",&m,&n);
//     printf("Enter the 1st matrix element : ");
//     for(i=0 ; i<m ; i++)
//     {
//         for(j=0 ; j<n ; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter the 2nd mstrix element : ");
//     for(i=0 ; i<m ; i++)
//     {
//         for(j=0 ; j<n ; j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("The 1st element is :\n");
//     for(i=0 ; i<m ; i++)
//     {
//         for(j=0 ; j<n ; j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The 2nd matrix number is :\n");
//     for(i=0 ; i<m ; i++)
//     {
//         for(j = 0 ; j<n ; j++)
//         {
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0 ; i<m ; i++)
//     {
//         for(j=0 ; j<n ; j++)
//         {
//             c[i][j] = 0;
//             for(k=0 ; k<n ; k++)
//             {
//                 c[i][j] = c[i][j]+a[i][k]*b[k][j];
//             }
//         }
//     } 
//     printf("The matrix multiplication is :\n");
//     for(i=0 ; i<m ; i++)
//     {
//         for(j=0 ; j<n ; j++)
//         {
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     } 
//      getch();
//  }


//  W A C P TO TRANSPOSE OF A MATRIX 

# include <stdio.h>
# include <conio.h>
void main()
{
    int a[3][3],i,j,b[3][3];
    printf("Enter the matrix element : ");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("The transpose of matrix is :\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    getch();
}
