#include <stdio.h>
void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The swaped value is m=%d n=%d \n", a, b);
}
int main(){
    int m, n;
    printf("Enter integer m and n respectively :\n");
    scanf("%d %d", &m, &n);
    swap(m,n);
    return 0;
}