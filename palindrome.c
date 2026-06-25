#include <stdio.h>

int main() {
    int num, reverse = 0, res, org;

    printf("Enter number: ");
    scanf("%d", &num);

    org = num;

    while (num != 0) {
        res = num % 10;
        reverse = reverse * 10 + res;
        num = num / 10;
    }

    if (org == reverse) {
        printf("%d is a palindrome", org);
    } else {
        printf("%d is not a palindrome", org);
    }

    return 0;
}


int isPalindrome(int num){
    int reverse = 0, res, org;
    org = num;

    while (num != 0) {
        res = num % 10;
        reverse = reverse * 10 + res;
        num = num / 10;
    }
    return org == reverse;
}
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}


#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}