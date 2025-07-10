#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*  Write a C program to reverse a string, by using recursion. */

void rev(char *str)// we resive a ponter for the first element in array
{
  if(*str=='\0') // basecase where the recusion stops there and strat to step back in the stack
        return;
  rev(str+1);// every time we are passing a ponter to next element 
  printf("%c",*str);// print pointer indecating value/ 

}

int main()
{
    char strin[100]; // declaring a string

    printf("Enter the string you want to reverses ");
    scanf("%s",strin); // we pass the first address of array of char to scan into

    rev(strin);

    return 0;


}
