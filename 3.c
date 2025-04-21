#include <stdio.h>
int main () {
    int n;
    printf("Enter your ID: ");
    scanf("%d",&n);
    switch (n){
case 1234:
    printf("Harry");
    break;
    case 5678:
    printf("Ron");
    break;
    case 1145:
        printf("Hermione");
    break;
    default:
        printf("Wrong ID");
    break;
    }
    return 0;
}
