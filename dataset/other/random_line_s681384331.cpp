ostream& operator<<(ostream& os,const vector<T>& v) {ITE(v) os << (ite-v.begin()) << " : " << *ite <<endl;return os;}
