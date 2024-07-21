template<typename T,typename U>
ll FindErase(T &v,U tar){
  ll cnt = 0;
  for(auto it = v.begin(); it != v.end();){
    if(*it == tar){
      it = v.erase(it);
      ++cnt;
    }