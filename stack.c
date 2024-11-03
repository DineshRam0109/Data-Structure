#include<stdio.h>
#define capacity 5

int arr[capacity];
int top=-1;
int isfull(){
    if(top==capacity-1)
        return 1;
    else
        return 0;
    }
void push(int data){
     if(isfull()==1)
        printf("Over stack flow\n");
    else
        top++;
        arr[top]=data;
     }
int isempty(){
     if(top==-1)
        return 1;
    else
        return 0;
}
int pop(){
    if(isempty()==1){
        printf("Under stack flow\n");
        return -1;}
    else{
        top--;
        return arr[top+1];
    }
    }
int peek(){
    if(isempty()==1)
        printf("Stack is empty\n");
    else
        return arr[top];
    }
void display(){
    int i;
    if(isempty()==1)
        printf("Stack is empty\n");
    else{
        for(int i=0;i<=top;i++){
            printf("%d ",arr[i]);
    }printf("\n");
    }
    }
int main(){
    int choice,data,popped,peeked;
    do{
        printf("Stack Operations:\n1)push\n2)pop\n3)peek\n4)display\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
    switch(choice){

     case 1:
        printf("Enter the element to be pushed:");
        scanf("%d",&data);
        push(data);
        break;

     case 2:
         popped=pop();
         if(popped!=-1){
         printf("Element popped :%d\n",popped);}
         break;

     case 3:
         peeked=peek();
         if(peeked!=-1){
         printf("Element at top:%d\n",peeked);}
         break;
     case 4:
         display();
         break;
        }
    }while(choice<5);
         return 0;
}
