//Write a program in C to find the sum of all elements of the array. 
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//2 5 8
//Expected Output:
//Sum of all elements stored in the array is : 15
#include <stdio.h>
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
