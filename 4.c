#include <stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main(){
    int m, n, result;
    printf("Enter number m and n :\n");
    scanf("%d %d", &m, &n);
    result=add(m,n);
    printf("The sum of the numbers is %d\n", result);
    
    return 0;
}