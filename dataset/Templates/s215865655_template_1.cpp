template<class T>
class lazySegmentTree{
private:
    vector<T> dat;
    vector<T> lazy;
    int _size;  //the number of leaves
    T _init;
    
public:
//    lazySegmentTree( vector<T> vec, T init = numeric_limits<T>::max() ): _init(init){
//        int size = vec.size();
//        if(size==0)return ;
//        
//        _size = 1;
//        while(_size<size)_size*=2;
//        dat.resize(_size*2);
//        rep(i,vec.size())dat[i+_size] = vec[i];
//        lazy.resize(_size*2,_init);
//    }