#include <stdio.h>
//ID is 1234
//password is 5678
int main () {
    int n,p;
    printf("Enter the ID: ");
    scanf("%d",&n);
    if (n==1234){
       for (int i=1;i<3;i++){
           printf("Enter the password: ");
            scanf("%d",&p);
        if (p==5678){
        printf("Welcome!");
        return 0;
        }
        else
        printf("You are not registered\n");
       }
       printf("Enter the password: ");
            scanf("%d",&p);
        if (p==5678){
        printf("Welcome!");
        return 0;
        }
        else
        printf("No more tries\n");

    }
    else
        printf("Wrong ID");
    return 0;
}
