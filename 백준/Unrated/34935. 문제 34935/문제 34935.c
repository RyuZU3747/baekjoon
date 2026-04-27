n,p,i,x,l,m;
__libc_start_main()
{
    long long int a, b = -1234567890123456789;
    char r[1010101];
    l = read(0, &r, 1010101);
    while (!(r[p] & 16))
    p++;
    while (r[p] & 16)
    {
        n *= 10;
        n += r[p++] - 48;
    }
    
    for(i=0;i<n;i++){
        a=0, m=0;
        while (1) {
            if(p >= l) { l = read(0, r, 1010101); p = 0; if(l <= 0) break; }
            if(r[p] == '-') { m = 1; p++; continue; }
            if(r[p] & 16) break;
            p++;
        }
        while (1) {
            if(p >= l) { l = read(0, r, 1010101); p = 0; if(l <= 0) break; }
            if(!(r[p] & 16)) break;
            a = a * 10 + (r[p++] - 48);
        }
        if(m)a=-a;
        if(b>=a)x=1;
        b=a;
    }
    if(x)
        write(1, "0", 1);
    else
        write(1, "1", 1);
    _exit(0);
}main;