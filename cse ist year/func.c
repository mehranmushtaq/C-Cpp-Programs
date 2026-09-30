#include <stdio.h>
long int Factorial(int n){
    long int fact=1;
    for(int i = 2 ; i<=n;i++){
        fact *=i;
    }
    return fact;
}
int main(){
    printf("%ld=factorial",Factorial(5));
    return 0;
}

#include <stdio.h>

// Function to find sum of digits
int sumOfDigits(int n)
{
    int sum = 0;

    while(n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return sum;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = sumOfDigits(num);

    printf("Sum of digits = %d", result);

    return 0;
}
