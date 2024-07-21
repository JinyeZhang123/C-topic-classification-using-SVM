  mint& operator+=(const mint& a){ if((x+=a.x)>=mod) x-=mod; return *this;}
