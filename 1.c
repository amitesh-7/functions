#include <stdio.h>
void add()
{
    int sum;
    int a, b;
    printf("Enter values of a and b .\n");
    scanf("%d %d", &a, &b);
    sum=a+b;
    printf("The sum of a and b is %d \n", sum);
    return;
}
int main(){
    add();
    return 0;
}