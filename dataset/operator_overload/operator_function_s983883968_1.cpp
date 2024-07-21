bool operator<(const Block &b2){
        ll s1 = s, w1 = w, s2 = b2.s, w2 = b2.w;
        return s1+w1 < s2+w2;
    }