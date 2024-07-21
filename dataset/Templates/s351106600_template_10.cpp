template <class T>
vector<T> divisor(T x){
    vector<T> res;
    for(T i=1;i*i<=x;i++){
        if(x%i==0){
            res.push_back(i);
            if(i!=x/i){
                res.push_back(x/i);
            }