template <class T>    
vector<T> copy_vector(vector<T> vec) {    
    vector<T> rtn;    
    rtn.reserve(vec.size());    
    copy(vec.begin(), vec.end(), back_inserter(rtn));    
    return rtn;    
}