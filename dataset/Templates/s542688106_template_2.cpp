template<class T>ostream&operator<<(ostream &os,const vector<T> &v){
    ITR(i,v)os<<*i<<(i==end(v)-1?"":" ");return os;}