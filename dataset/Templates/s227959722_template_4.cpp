template<typename T,typename U>
ostream& operator<<(ostream& os,const pair<T,U>& p){
    os<<p.first<<" "<<p.second;
    return os;
}