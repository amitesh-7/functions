#include <stdio.h>
int fab(int n){
    if (n==0)
    return 0;
    else if (n==1)
    return 1;
    else
    return fab(n-1)+fab(n-2);
}
int main(){
    int num;
    printf("Enter up to which fabonacci should be printed :\n");
    scanf("%d", &num);
    printf("The sum is %d .\n", fab(num));
    return 0;
}