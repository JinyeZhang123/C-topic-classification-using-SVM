template<class T>
vector<T> cumsum1d(const vector<T> &v){
    int size = v.size();
    vector<T> cum(size+1,0);
    for(int i = 0; i < size; i++){
        cum[i+1] = v[i] + cum[i];
    }