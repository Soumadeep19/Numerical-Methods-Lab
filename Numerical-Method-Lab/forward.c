#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    float x[20], y[20], f, s, h, p,d;
    int i, j, n;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    printf("Enter the elements of x: ");
    for (i = 0; i <= n; i++) {
        scanf("%f", &x[i]);
    }

    printf("Enter the elements of y: ");
    for (i = 0; i <= n; i++) {
        scanf("%f", &y[i]);
    }

 h = x[2] - x[1];

    printf("Enter the value of x for interpolation: ");
    scanf("%f", &f);

   
    s = (f - x[1]) / h;
    p=1;
    d = y[1];

    for (i = 1; i <= (n-1); i++) {
       
        for (j = 0; j <(n- i); j++) {
            y[j]= y[j + 1] - y[j];
        }
       p=p*(s-i+1)/i;
        d = d + p * y[1];
    }

    printf("Interpolated value at x = %f is %f\n", f, d);
    getch();
    return 0;
}
