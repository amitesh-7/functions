#include <stdio.h>
int change(int a){
    return a=77;
}
int main(){
    int b=22, c;
    c=change(b);
    printf("The value of b is %d\n", c);
    
    return 0;
}