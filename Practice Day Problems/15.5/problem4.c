#include<stdio.h>

void change_it(int num[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    num[n-1] = 100;

    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    change_it(num,n);
    return 0;
}