template<typename T>
istream& operator>>(istream& is,vector<T>& a){
    for(int i=0;i<a.size();i++)is>>a[i];
    return is;
}