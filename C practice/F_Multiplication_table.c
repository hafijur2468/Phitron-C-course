#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=12;i++){
        int mul = n*i;
        printf("%d * %d = %d\n",n,i,mul);
    }
    return 0;
}
