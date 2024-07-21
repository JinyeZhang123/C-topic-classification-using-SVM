template<class o> void qr(o &x) {
    char c=gc; x=0; int f=1;
    while(!isdigit(c)){if(c=='-')f=-1; c=gc;}