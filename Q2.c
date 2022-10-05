//2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int a1[100][100],a2[100][100],product[100][100],i,j,size1,size2;
    printf("\nEnter the how many rows you want = ");
    scanf("%d",&size1);
    printf("\nEnter the how many coloumns you want = ");
    scanf("%d",&size2);
    printf("\nEnter the element for 1st Array \n");
    for(i=0;i<size1;++i)
    {
     for(j=0;j<size2;++j)
     {
        printf("\n a%d%d =",i+1,j+1);
        scanf("%d",&a1[i][j]);
     }

    }
   printf("\nEnter the element for 2nd Array\n ");
 for(i=0;i<size1;++i)
    {
     for(j=0;j<size2;++j)
     {
        printf("\n a%d%d =",i+1,j+1);
        scanf("%d",&a2[i][j]);
     }

    }
    for(i=0;i<size1;++i)
    {
     for(j=0;j<size2;++j)
     {
   product[i][j]=a1[i][j]*a2[i][j];
     }

    }
printf("\n Product of the two matrix\n");
for(i=0;i<size1;++i)
    {
     for(j=0;j<size2;++j)
     {
      printf("%d   ",product[i][j]);
      if (j==size2-1)
        {
        printf("\n\n");
      }
     }
    }
return 0;
}
