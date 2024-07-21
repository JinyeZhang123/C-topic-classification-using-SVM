template<typename C>
  int max_left(int r, C &check){
    if(r == 0) return 0;
    r += n;
    for(int i = height; i>=1; --i) push((r-1) >> i);
    M sm = m;
    do{
      while(r>1 && (r%2)) r >>= 1;
      if(!check(f(node.at(r), sm))){
        while(r < n){
          push(r);
          r *= 2*r + 1;
          if(check(f(node.at(r), sm))){
            sm = f(node.at(r), sm);
            r--;
          }