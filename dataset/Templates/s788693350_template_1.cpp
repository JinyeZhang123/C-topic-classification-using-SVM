template<typename T> ostream & operator<<(ostream& os, vector<T> const& v){
        for(auto it=v.begin(); it!=v.end(); ++it){
            os << *it << (it+1==v.end() ? "" : ",");
        }