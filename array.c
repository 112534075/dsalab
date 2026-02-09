#include<stdio.h>
int main()
{
 int n,i,search,found=0;
 printf("enterr number of element in the array:");
 scanf("%d",&n);
 int arr[n];
 printf("enter elements of the array:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("enter element to seearch:");
 scanf("%d",&search);
 for(i=0;i<n;i++)
 {
  if(arr[i]==search)
  {
   found=1;
   printf("element %d found at index %d.\n",search,i);
   break;
  }
 }
 if(!found)
 {
  printf("element %d found in the array.\n,search");
 }
 return 0;
}

