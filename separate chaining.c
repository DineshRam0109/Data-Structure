#include<stdio.h>
#include<stdlib.h>
#define size 7
struct node{
int data;
struct node *next};
struct node *arr[size];
void init(){
for(int i=0;i<size;i++){
    arr[i]=-1;
}}
void insert(int value){
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->next=NULL;
int hkey=value%size;
if(arr[hkey]==NULL){
    arr[hkey]=newnode;
}
else{
    struct node *temp=arr[hkey];
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=newnode;
}
}
void print(){
for(int i=0;i<size;i++){
        struct node *temp=arr[i];
while(temp){
    printf("%d ",temp->data);
    temp=temp->next;
}printf("\n");
}
}
int main(){
    int val;
for(int i=0;i<size;i++){
    scanf("%d ",&val);
    insert(val);
    print();
}
}
