#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int i,n,a,b;
    scanf("%d",&n);
    
    for(i =1;i<=n;i++){
        scanf("%d %d",&a,&b);
        int sum = 0;
        if(a<b){
            for(int j = a+1;j<b;j++){
                if(j%2!=0){
                    sum +=j;
                }
            }
            printf("%d\n",sum);
        }
        else{
            for(int j = b+1;j<a;j++){
                if(j%2!=0){
                    sum +=j;
                }
            }
            printf("%d\n",sum);
        }

    }
    return 0;
}