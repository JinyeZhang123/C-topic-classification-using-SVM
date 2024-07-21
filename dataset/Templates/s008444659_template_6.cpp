template<class T> 
pair<T,T> ChineseRem(T b1,T m1,T b2,T m2){
    T p,q;
    T d=extgcd<T>(m1,m2,p,q);
    if((b2-b1)%d!=0){
        return make_pair(0,-1);
    }