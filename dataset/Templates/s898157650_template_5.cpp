template<class T> 
T extgcd(T a,T b,T &x,T &y){
    if(b==0){
        x=1;y=0;
        return a;
    }