//4. Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a1[100][100],a2=0,sum[100][100],i,j,size1,size2;
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
    for(i=0;i<size1;++i)
    {
     for(j=0;j<size2;++j)
     {
        if(i==j)
            {
               sum[i][j]=a1[i][j]+a2;
               a2=sum[i][j];
        }
     }

    }
printf("\n sum of the Daigonal matrix =%d",a2);
}
