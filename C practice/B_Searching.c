#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n,test;
    int index, s =0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&test);
    for(int i=0;i<n;i++){
        if(a[i]==test){
            s+=1;
            index =i;
            break;
        }
    }
    if(s==0){
        printf("%d",-1);
    }
    else{
        printf("%d",index);
    }
    
    return 0;
}