#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagrams");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++) {
        count[(int)str1[i]]++;
        count[(int)str2[i]]--;
    }

    for(i = 0; i < 256; i++) {
        if(count[i] != 0) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
