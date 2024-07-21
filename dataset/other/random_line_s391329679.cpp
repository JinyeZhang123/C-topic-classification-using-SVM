TMPL_T istream& operator>>(istream&is,tuple<T*,int&>x){return is>>tie(get<1>(x),get<0>(x));}
