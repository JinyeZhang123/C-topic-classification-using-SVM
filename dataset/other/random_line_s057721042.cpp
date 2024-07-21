template <typename T, typename ... U> void _dump(T t, U ... u){__dump(t); if(sizeof...(u)) cerr << ", "; _dump(u...);}
