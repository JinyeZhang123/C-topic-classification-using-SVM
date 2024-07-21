template<class o> void qw(o x) {
    if(x/10) qw(x/10);
    putchar(x%10+'0');
}