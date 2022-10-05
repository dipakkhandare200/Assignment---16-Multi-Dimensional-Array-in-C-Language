//3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int a1[100][100],a2[100][100],product[100][100],i,j,size1,size2;
    printf("\nEnter the how many rows you want = ");
    scanf("%d",&size1);
    printf("\nEnter the how many coloumns you want = ");
    scanf("%d",&size2);
    printf("\nEnter the element for 1st Array \n");
    for(i=0;i<size1;i++)
    {
     for(j=0;j<size2;j++)
     {
        printf("\n a%d%d =",i+1,j+1);
        scanf("%d",&a1[i][j]);
     }

    }
    for(i=0;i<size1;i++)
    {
     for(j=0;j<size2;j++)
     {
   a2[j][i]=a1[i][j];
     }

    }
printf("\n Transpose of the given matrix\n");
for(i=0;i<size1;++i)
    {
     for(j=0;j<size2;++j)
     {
      printf("%d   ", a2[i][j]);

       }
       printf("\n\n");

     }
   return 0;
 }

