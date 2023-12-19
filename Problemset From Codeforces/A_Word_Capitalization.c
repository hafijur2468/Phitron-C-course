#include<stdio.h>


int main(){
    char word[1001];
    fgets(word,1001,stdin);

    if(word[0] >='a' && word[0] <= 'z'){
        word[0] = word[0] -32;
    }

    printf("%s",word);
    return 0;
}