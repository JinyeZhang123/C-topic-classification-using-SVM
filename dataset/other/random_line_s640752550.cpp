template<class T,class... Rest>void ins(T& v,Rest&... rest){cin>>v;ins(rest...);}
