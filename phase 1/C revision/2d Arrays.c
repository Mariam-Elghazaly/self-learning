#include <stdio.h>
#include <stdlib.h>
/*  Write a C program to read a matrix from the user, and then display the row with the maximum
total/sum (that is, the row whose sum of elements is maximum)*/


int main()
{
    int row,column;
    int max=-2147483648;;
    int index;
    printf("Please enter number of rows and columns :");
    scanf("%d%d",&row,&column);
    int arr[row][column];

    for(int i=0;i<row;i++)
    {
        int rowsum=0;

        for(int j=0;j<column;j++)
        {
            printf("Enter element[%d][%d] : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
            rowsum+=arr[i][j];

        }

        if(rowsum>max){
            max=rowsum;
            index=i+1;
    }

    }

    printf("The maximum sum of a row is in %d with sum of %d",index,max);


}
