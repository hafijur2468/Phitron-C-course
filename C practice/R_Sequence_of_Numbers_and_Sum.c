#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    int a,b,sum=0;
    int i = 0;
    while(scanf("%d %d",&a,&b) !=EOF){
        if(a<=0 || b<=0){
            break;
        }
        else{
            sum = 0;
            if(a>b){
            for(i=b;i<=a;i++){
                printf("%d ",i);
                sum+=i;
            }
            printf("sum =%d",sum);
        }
            else if(b>a){
                for(i=a;i<=b;i++){
                    printf("%d ",i);
                    sum+=i;
                }
                printf("sum =%d",sum);
            }
            printf("\n");
        }
        i++;
    }
    return 0;
}