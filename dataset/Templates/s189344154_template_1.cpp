template<typename T>
ostream& operator<<(ostream& os,const vector<T>& v){
    if(v.empty()){
        os<<"{ }