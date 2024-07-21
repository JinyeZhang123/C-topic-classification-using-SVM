template<typename T>
inline int getplc(T x,int y) { return (x>>y)&1; }