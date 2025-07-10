#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*
    Write a C program that will print the following pattern:
        *
        ***
        *****
        *******
        *********
        *********
        *******
        *****
        ***
        *
*/
    int main()
    {



    int b=1;

    for(int i=0;i<10;i++) //loop for Rows
    {
        if(i<5) //to have the first increasing pattern
        {
            for(int j=1;j<=b;j++) // to print * 
            printf("*");
            b+=2; //because rach row is greater than the previous one with two * 
        }
        else {
            b-=2; // we strat to decrease , so we reduce * by 2 everytime first
            for(int j=1;j<=b;j++)
            printf("*");
        }

        printf("\n"); // to have a new line before going to need iteration 
    }

 }



