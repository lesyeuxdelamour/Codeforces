#include <stdio.h>

int n, k, l, c, d, p, nl, np, ml, slices, salt, toasts;

int main() 
{
    scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);
    ml = k*l;
    slices = c*d;
    salt = p;
    toasts = (ml/nl);
    toasts = toasts < slices ? toasts : slices;
    toasts = toasts < salt/np ? toasts : salt/np;
    printf("%d", toasts/n);
    return 0;
}
