//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4
#include<stdio.h> 
int main()
{
 int a[5],i,sum=0;
 printf("Enter the Array Elements\n");
 
 for(i=0;i<5;i++)
 {
   scanf("%d",&a[i]);
  sum = sum + a[i]; 
 }
 printf("Sum of Array is %d",sum);
  
  return 0;
}
