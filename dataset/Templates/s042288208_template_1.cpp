template<typename T>
ostream& operator<<(ostream& os,const vector<T>& val){
    os << "[ ";
    for(typename vector<T>::const_iterator it=val.begin();
        it != val.end();++it){
        os << *it << " ";
    }