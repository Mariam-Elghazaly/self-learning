#include <stdio.h>
#include <stdlib.h>
/*          Write a C program that asks the user to enter 10 integers in an array. The program will then
                display (based on the entered numbers) one of the following messages:
                "the numbers in the array are increasing",
                "the numbers in the array are decreasing",
                "the numbers in the array are not changing", or
                "the numbers in the array are increasing and then decreasing."*/

int main()
{
    int arr[10]={0};
    int count=0;
     printf("Please element number 1 : ");
     scanf("%d",&arr[0]);
    for(int i=1; i<=9 ;i++)
    {
        printf("Please element number %d : ",i+1);
        scanf("%d",(arr+i));
        if(arr[i]>arr[i-1])
            count++;
        if(arr[i]<arr[i-1])
            count--;
    }

    switch (count)
    {
    case 9:
        printf("the numbers in the array are increasing");
        break;
    case -9:
        printf("the numbers in the array are decreasing");
        break;
    case 0:
        printf("the numbers in the array are not changing");
        break;
    default:
        printf("the numbers in the array are increasing and then decreasing");

    }

    return 0;


}
