#include <stdio.h>

void reverse(char str[]) {
    int start = 0;
    int end = 0;
    char temp;

 
    while (str[end] != '\0') {
        end++;
    }

    end--; 

  
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[] = "hello";

    reverse(str);

    printf("%s", str);

    return 0;
}