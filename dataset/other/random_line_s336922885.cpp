ll DIV(const ll &a, const ll &b,const ll &mod) {ll x,y; extgcd(b,mod,x,y);return MUL(a,(x+mod)%mod,mod);}
