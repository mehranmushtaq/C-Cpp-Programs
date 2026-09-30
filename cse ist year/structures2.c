#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[4];
    int i, max = 0;

   for(i=0;i<4;i++){
    printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    for(i=1;i<4;i++){
        if(s[i].marks>s[max].marks){
            max = i;
        }
    }
    printf("\nStudent with highest marks:\n");
    printf("Roll Number: %d\n", s[max].roll);
    printf("Name: %s\n", s[max].name);
    printf("Marks: %.2f\n", s[max].marks);
    return 0;

   }
