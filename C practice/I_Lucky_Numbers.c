#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    int a;
    scanf("%d",&a);
    int d = a%10;
    int e = a/10;
    if(d%e == 0 || e%d==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}