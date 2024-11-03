#include<stdio.h>
#include<string.h>
# define capacity 20

int top=-1;
int arr[capacity];

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
        printf("Under stack flow\n");}

    else{
        top--;
        return arr[top+1];
    }
}

int main(){
char str[10];
printf("Enter the expression:");
scanf("%s",str);

int i,num1,num2;
int n=strlen(str);

for(int i=0;i<n;i++){

    if(isdigit(str[i]))
        push(str[i]-'0');

    else{
        num2=pop();
        num1=pop();

        switch(str[i]){

        case '+':
            push(num1+num2);
            break;

        case '-':
            push(num1-num2);
            break;

        case '*':
            push(num1*num2);
            break;

        case '/':
            push(num1/num2);
            break;}
    }
}
printf("Evaluated Answer: %d",pop());
}
