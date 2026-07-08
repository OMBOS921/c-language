#include <stdio.h>
int main(){
    int num;
    printf("please enter your lucky number : ");
    scanf("%d",&num);

    if (num%5==0)
    {
        /* code */
        printf("yes! your lucky number is div by 5");
    }
    return 0;

}