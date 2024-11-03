#include<stdio.h>
#include<stdlib.h>
int main(){
int n,size,key;
scanf("%d %d\n",&n,&size);
int arr[size];
for(int i=0;i<size;i++){
    arr[i]=-1;
}
for(int i=0;i<n;i++){
    scanf("%d ",&arr[i]);
}
for(int i=0;i<n;i++){
        int flag=0;
    int hkey=key%size;
    if(arr[hkey]==-1){
        arr[hkey]=key;
        flag=1;
    }
    else if(arr[hkey]!=key){
        for(int i=0;i<size;i++){
            if(arr[hkey]==-1){
                arr[hkey]=key;
                flag=1;
                break;
            }
            hkey=(key+i*i)%size;
        }
    }
    if(arr[hkey]==key){
            flag=1;

    }
    if(flag==0){
        printf("Table is full\n");
        continue;
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }printf("\n");
}
}
