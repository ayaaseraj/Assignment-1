#include <stdio.h>
int main () {
    int n;
    printf("Enter your grade: ");
    scanf("%d",&n);
    if (n>+85)
        printf("Excellent");
    else if (n<85 && n>=75)
        printf("Very good");
    else if (n<75 && n>=65)
        printf("Good");
    else if (n<65 && n>=55)
        printf("Weak");
    else
        printf("Fail");
    return 0;
}
