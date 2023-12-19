#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    int n,i,s=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(i==2 || i==3){
            printf("%d ",i);
        }
        else{
            for(int j=2;j<=i/2;j++){
                s=0;
                if(i%j==0){
                    s+=1;
                    break;
                }    
            } 
            if(s==0){
                    printf("%d ",i);
                }
        }           
    }
    return 0;
}