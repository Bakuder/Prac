#include <stdio.h>

int horner(float poly[], int n, int x)
{
    int result = poly[0];  

    for (int i=1; i<n; i++)
        result = result*x + poly[i];

    return result;
}


int main()
{
    int n;
    printf("количество коэффициентов в полиноме = ");
    scanf("%d", &n);
    printf("\n");
    
    float poly[n];
    printf("коэффициенты полинома (от старшего %d-штук)\n",n);
    for (int i = 0; i < n; i++)
        scanf("%f", &poly[i]);
        
    int x;
    printf("x = ");
    scanf("%d", &x);
    printf("\n");
    for (int i = n-1; i > 0; i--)
        printf("%3.3f*x^%d + ",poly[i],i);
    printf("%3.3f*x^%d \n",poly[0],0);
    
    
    int res = horner(poly, n, x);
    printf("Value of polynomial is %d", res);
    return 0;
}
