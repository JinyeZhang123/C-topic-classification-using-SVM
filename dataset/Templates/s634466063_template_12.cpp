template<typename C>
  int max_right(int l, C &check){
    if(l == defn) return defn;
    l += n;
    for(int i = height; i>=1; --i) push(l >> i);
    M sm = m;
    do{
      while(l%2 == 0) l >>= 1;
      if(!check(f(sm, node.at(l)))){
        while(l < n){
          push(l);
          l *= 2;
          if(check(f(sm, node.at(l)))){
            sm = f(sm, node.at(l));
            l++;
          }