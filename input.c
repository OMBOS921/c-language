#include <stdio.h>
int main(){
    int age;
    float marks;
    char name[50];
    
    printf("please enter your name :");
    fgets(name , 50, stdin);
    printf("your name is %s\n",name);
    printf("please emter your age:");
    scanf("%d",&age);
    printf("your age is %d\n",age);
    printf("please enter your marks:");
    scanf("%f",&marks);
    printf("your marks is %f\n",marks);

    return 0;


}