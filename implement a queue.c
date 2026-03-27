#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void enqueue()
{
 int item;
 if(rear==MAX-1)
 {
  int item;
  if(rear==MAX-1)
  {
   printf("queue overflow!\n");
   return;
  }
   printf("enter element to insert:");
   scanf("%d",&item);
   if(front==-1)
   front=0;
   queue[++rear]=item;
   printf("element inserted successfully.\n");
 }
  void dequeue()
  {
   if(front==-1||front>rear)
   {
    printf("queue underflow!\n");
    return;
   }
    printf("queue elements:\n");
    for(int i=front;i<=rear;i++)
    printf("%d",queue[i]);
    printf("\n");
   }
    int main()
    {
	 int choice;
	 do
	 {
	  printf("\n---queue menu ---\n");
	  printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
	  printf("enter your choice:");
	  scanf("%d",&choice);
	  switch(choice)
	  {
	   case1:
	   	enqueue();
	   	break;
	   case2:
	   	dequeue();
	   	break;
	   case3:
	    display();
		break;
	   case4:
	    printf("exiting program.\n");
		break;
	   default:
	    printf("invaild choice!\n");
	  }
     }
      while(choice!=4);
      return 0;
   }
   
