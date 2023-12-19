#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    int a,i,s=0;
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
            s=s+1;
        }
    }
    if(s>0){
        printf("NO");
    }
    else{
        printf("YES");
    }
    

    return 0;
}
