template<class T> ostream& operator<<(ostream& o,const vector<T> &vc){
    o<<"{";
    for(const T& v:vc) o<<v<<",";
    o<<"}