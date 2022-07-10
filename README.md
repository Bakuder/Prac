#include <stdio.h>

int main()
{
    int n, x;
    scanf("%i", &n);
    scanf("%i", &x);
    int a[n+1];
    for (int i = n; i >= 0; --i)
    {
        scanf("%i", &a[i]);
    }
    int s = a[n];
    for (int i = 1; i <= n; ++i)
    {
        s *=x;
        s += a[n-i];
    }
    printf("%i", s);
}
