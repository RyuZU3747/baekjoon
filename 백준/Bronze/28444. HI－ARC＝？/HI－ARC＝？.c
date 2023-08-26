a, b, c, d, e, out, p,t,sz;
__libc_start_main(){
    char r[30], w[10];
    read(0,&r,25);
    while(!(r[p] & 16)) p++;
    while(r[p] & 16){
        a *= 10;
        a += r[p++]-48;
    }
    while(!(r[p] & 16)) p++;
    while(r[p] & 16){
        b *= 10;
        b += r[p++]-48;
    }
    while(!(r[p] & 16)) p++;
    while(r[p] & 16){
        c *= 10;
        c += r[p++]-48;
    }
    while(!(r[p] & 16)) p++;
    while(r[p] & 16){
        d *= 10;
        d += r[p++]-48;
    }
    while(!(r[p] & 16)) p++;
    while(r[p] & 16){
        e *= 10;
        e += r[p++]-48;
    }
    out = a*b-c*d*e;
    t = out;
    p = -1;
    if(out <= 0){
        w[1+p++] = 45;
        out *= -1;
    }
    while(t){
        p++;
        t/=10;
    }
    sz = p;
    while(out){
        w[p] = out%10 + 48;
        out /= 10;
        p--;
    }
    write(1,w,sz+1);
    _exit(0);
}main;