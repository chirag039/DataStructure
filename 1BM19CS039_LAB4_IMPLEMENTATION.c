#include <stdio.h>
#include<stdlib.h>
 
#define limit 5
 
void insert();
void delete();
void display();
int queue_array[limit];
int rear = - 1;
int front = - 1;
int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } 
    } 
} 
 
void insert()
{
    int add_item;
    if (rear == limit - 1)
    printf("\n\n\n\n!!!!!!!!!Queue Overflow!!!!!!!!!! \n\n\n\n\n\n\n");
    else
    {
        if (front == - 1)
        
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} 
 
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("\n\n!!!!!!!!Queue Underflow!!!!!!!!!!! \n\n\n");
        return ;
    }
    else
    {
        printf("\n\n\nElement deleted from queue is :  %d\n\n\n\n", queue_array[front]);
        front = front + 1;
    }
} 
 
void display()
{
    int i;
    if (front == - 1 || rear==-1)
        printf("\n\n\n\n\n\n!!!!!!!!Queue is empty!!!!!!!!!\n\n\n\n\n");
    else
    {
        printf("******QUEUE IS********  : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} 
