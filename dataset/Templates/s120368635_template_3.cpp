template<class F>
    int search_left(int r, F cond){
        if(r <= 0) return 0;
        thrust((r += sz)-1);
        T val = M::e();
        do {
            r--;
            while(r > 1 && r&1) r >>= 1;
            if(!cond(M::f(reflect(r), val))){
                while(r < sz) {
                    eval(r);
                    r = ((r << 1)|1);
                    if (cond(M::f(reflect(r), val))){
                        val = M::f(reflect(r--), val);
                    }