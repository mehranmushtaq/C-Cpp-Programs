#include <stdio.h>

//Pass By Value
void change(int x ){
    x = 100;
}
int main(){
    int a =10;
    change(a);
    printf("%d",a);
    return 0;
}


// Pass By Reference
void modify(int *x){
    *x = 10;
}
int main(){
    int a = 5;
    modify(&a);
    printf("%d",a);
    return 0;
}
