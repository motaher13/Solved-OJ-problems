#include <stdio.h>
void insert(int);
int del();
void display();
#define max 5
int queue[max];
int front=-1;
int rear=-1;

int main()
{
    int choice,num;
    while(1){
    scanf("%d",&choice);
    if(choice==1){
        scanf("%d",&num);
        insert(num);
    }
    if(choice==2){
            num=del();
            printf(" %d",num);
    }

    if(choice==3){
        display();
    }
    if(choice==4){
      exit(1);
    }

    }

}
void insert(int ele){
    if(rear==max-1)return;
   if(front==-1)front=0;
   rear++;
   queue[rear]=ele;

}
int del()
{
    int ele;
    if(front==-1||front==rear+1){
        return;
    }
    ele=queue[front];
    front++;
    return ele;
}
void display()
{
    if(front==-1||front==rear+1){
        return;
    }
    int i;
    for(i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
}
