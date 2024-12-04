#include <stdio.h>
void add(int a, int b)
{
    int sum;
    sum=a+b;
    printf("The sum of the numbers is %d\n", sum);
    
}
int main(){
    int m, n;
    printf("Enter the number m and n.\n");
    scanf("%d %d", &m, &n);
    add(m,n);
    return 0;
}