#include <stdio.h>
long long int n,o,a,b,c,p,l;
char aa,bb,cc;
main()
{
    char r[40], w[32];
    read(0, &r, 40);
    while (!(r[p] & 16))
    p++;
    while (r[p] & 16)
    {
        a *= 10;
        a += r[p++] - 48;
    }
    while (!(r[p] & 16))
    p++;
    while (r[p] & 16)
    {
        b *= 10;
        b += r[p++] - 48;
    }
    while (!(r[p] & 16))
    p++;
    while (r[p] & 16)
    {
        c *= 10;
        c += r[p++] - 48;
    }
    while (!(r[p] & 16))
    p++;
    while (r[p] & 16)
    {
        n *= 10;
        n += r[p++] - 48;
    }
    o=((c<<1)+b)*(n>>1)+(n&1)*(a+b+c);
    p=0;
    n=o;
    while(n){
        n/=10;
        p++;
    }
    l=p;
    while (l--)
    {
        w[l] = o % 10 + 48;
        o /= 10;
    }
    write(1, w, p);
    _exit(0);
}