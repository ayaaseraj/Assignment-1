
#include <stdio.h>
int main () {
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&x , &y , &z);
    if (x>=y && x>=z)
        printf("%d is the max",x);
    else if (y>=x && y>=z)
        printf("%d is the max",y);
    else if (z>=y && z>=x)
        printf("%d is the max",z);
    return 0;
}
