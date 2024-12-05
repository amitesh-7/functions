#include <stdio.h>
int fab(int n)
{
    if (n == 1 || n == 2)
        return n - 1;
    else
        return fab(n - 1) + fab(n - 2);
}
int main()
{
    int n;
    printf("Enter up to which fabonacci should be printed :\n");
    scanf("%d", &n);
    printf("The series is :\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fab(i));
    }
    return 0;
}