template<class _T>
inline void _prfe(const char *_n, _T _c, bool _p = false){
    ITER(_c) _it=_c.begin();
    if(_p){ cout<<_n<<" = ["<<endl;for(;_it!=_c.end();++_it)cout<<"    "<<*_it<<endl;cout<<"]"<<endl; }