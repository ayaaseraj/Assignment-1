#include <stdio.h>
int check(int a){
if (a==12)
    printf ("Thanks");
else
    printf("Try Again\n");
        scanf("%d",&a);
        check(a);
}
int main () {
    int r;
    printf("Enter the result of 3*4: ");
    scanf("%d",&r);
    check (r);
    return 0;
}
