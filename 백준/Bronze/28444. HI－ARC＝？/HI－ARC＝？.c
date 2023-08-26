a, b, c, d, e, out, p,t,sz;
#define input(x){while(!(r[p]&16))p++;while(r[p]&16)x=10*x+(r[p++]&15);}
__libc_start_main(){
    char r[30], w[10];
    read(0,&r,25);
    input(a);
    input(b);
    input(c);
    input(d);
    input(e);
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