#include <stdio.h>

// // // fib series
// int main() {
//   int n, a=0,b=1,next;
//   printf("enter number of terms:");
//   scanf("%d", &n);

//   for(int i=0; i<n ; i++){
//     printf("%d",a);
//     next = a+b;
//     a = b;
//     b = next;
//   }
//   return 0;
// }

// int main(){
//     int n,original,reversed=0,remainder ;
//     printf("enter number n:");
//     scanf("%d", &n);
//     original=n;

//     while(n!=0){
//         remainder = n%10;
//         reversed = reversed * 10 + remainder;
//         n = n/10;
//     }
// if(original == reversed){
//     printf("palindrome");
// }else{
//     printf("not a palindrome");
// }
// return 0;

// }

// #include <stdio.h>

// int main() {
//     int n, original, remainder, result = 0, digits = 0;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     original = n;

//     // Count digits
//     while (original != 0) {
//         digits++;
//         original /= 10;
//     }

//     original = n;

//     // Calculate Armstrong sum without pow()
//     while (original != 0) {
//         remainder = original % 10;

//         int power = 1;
//         for(int i = 0; i < digits; i++) {
//             power *= remainder;   // multiply digit 'digits' times
//         }

//         result += power;
//         original /= 10;
//     }

//     // Check
//     if (result == n)
//         printf("Armstrong number");
//     else
//         printf("Not an Armstrong number");

//     return 0;
// }

// int main(){
//     int n = 5;
//     for(int i=1; i<n;i++){
//         for(int j =1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i, j, n = 5;

//     for(i = n; i >= 1; i--) {
//         for(j = 1; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(){
//     int fact=1,n;
//     printf("enter n");
//     scanf("%d",&n);
//     for(int i = 1; i<=n;i++){
//         fact *=i;
//     }
//     printf("%d = fact",fact);
// }

// int main(){
//     int digsum=0;
//     int num=238;
//     while(num>0){
//         int lastdig = num%10;
//         num = num/10;
//         digsum +=lastdig; 
//     }
//     printf("%d=digsum",digsum);
// }

// #include <stdio.h>

// int main() {
//     int n = 4;

//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(){
//     int k =1;
//     int n =5;
//     for(int i=1;i<n;i++){
//         for(int j =1; j<=i;j++){
//             printf("%d",   k);
//             k++;
//         }
//         printf("\n");
//     }
// }