//Write a program in C to find the sum of all elements of the array. 
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//2 5 8
//Expected Output:
//Sum of all elements stored in the array is : 15
#include <stdio.h>
int main()
{
   int N,a[10],i,sum=0;
   printf("Enter the number of array elements");
   scanf("%d",&N);
   printf("Enter the array elements");
   for(i=0;i<N;i++)
   {
     scanf("%d",&a[i]);
   }
    for(i=0;i<N;i++)
  {
    sum=sum+a[i];
  }
  printf("The sum=%d",sum);
  return 0;
}
