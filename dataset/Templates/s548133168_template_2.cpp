template<class T,class L>
istream& operator>>(istream& is,pair<T,L>& p){ is>>p.first;is>>p.second;return is; }