template<typename T>
void read_vec(vector<T>& v, int n){
    T tmp;
    REP(i, n){
        cin>>tmp;
        v.push_back(tmp);
    }