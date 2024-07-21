template<class T> void print(vector<T>& a){
    int sz = a.size();
    for(int i=0;i<sz;i++)cout<<a[i] << (i<sz-1?' ':'\n');
}