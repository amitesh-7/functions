#include <stdio.h>
int fac(int n){
    if (n==0)
    return 1;
    else 
    return (n*fac(n-1));
}
int main(){
    int num, result;
    printf("Enter the number to find the factorial :\n");
    scanf("%d", &num);
    result=fac(num);
    printf("The factorial of %d is %d .\n", num, result);
    return 0;
}