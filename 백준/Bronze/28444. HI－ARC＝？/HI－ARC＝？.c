a, b, c, d, e;
main(){
    char r[30], w[10];
    read(0,&r,25);
    int p = 0;
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
    int out = a*b-c*d*e;
    int t = out;
    p = -1;
    if(out <= 0){
        w[1+p++] = 45;
        out *= -1;
    }
    while(t){
        p++;
        t/=10;
    }
    int sz = p;
    do{
        w[p] = out%10 + 48;
        out /= 10;
        p--;
    }while(out);
    write(1,w,sz+1);
    _exit(0);
}