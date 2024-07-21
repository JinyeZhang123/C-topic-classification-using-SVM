template <typename T>
inline vector<int> int_seperation(T N,int d=10){
    vector<int> v; while(N){v.push_back(N%d); N/=d;}