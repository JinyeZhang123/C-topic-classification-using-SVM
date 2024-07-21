template<typename T>
ostream& operator<<(ostream& os,const vector<T>& a){
    for(int i=0;i<a.size();i++){
        os<<a[i]<<((i+1!=a.size())?" ":"");
    }