#include <stdio.h>

int main(){
    char ch;
    printf("enter ch:");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("lowercase");
    }
    else{
        printf("uppercase");
    }
    return 0;
}