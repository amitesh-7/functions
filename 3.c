#include <stdio.h>
int add(){
    int a, b, sum;
    printf("Enter the numbers to be added :\n");
    scanf("%d %d", &a, &b);
    sum = a+b;
    return sum;
}
void main(){
    int result;
    result=add();
    printf("The sum of the numbers are %d \n", result);
}