#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=4*n;i++){
        
        if(i%4==0){
            printf("PUM\n");
            continue;
        }
        printf("%d ",i);  
    }
    return 0;
}