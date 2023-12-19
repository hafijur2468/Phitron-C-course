#include<stdio.h>
#include<string.h>


int main(){
    char a[101],b[101];
    scanf("%s %s",a,b);
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i] <= 'Z'){
            a[i] = a[i] + 32;
        }

        if(b[i]>='A' && b[i] <= 'Z'){
            b[i] = b[i]+ 32;
        }
    }

    int res = strcmp(a,b);

    printf("%d",res);
    return 0;
}