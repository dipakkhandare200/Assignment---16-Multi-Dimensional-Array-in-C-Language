//5. Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a1[100][100],a2=0,sum=0,i,j,size1,size2;
    printf("\nEnter the how many rows & coloumns you want = ");
    scanf("%d%d",&size1,&size2);
    a2=size1;
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
    {         a2=a2-1;

     for(j=0;j<size2;++j)
     {
        if(j==a2)
            {
               sum=sum+a1[i][j];
        }
     }

    }
printf("\n sum of the Daigonal matrix =%d",sum);
}

