template <class T1,class T2> // T1が要素、T2が作用素
class LazySegTree2 { // 区間長に比例したものを扱える
    public:
    int siz;
    typedef function<T1(T1,T1)> FX;
    typedef function<T1(T1,T2)> FA;
    typedef function<T2(T2,T2)> FM;
    typedef function<T2(T2,int)> FP;
    FX fx;
    FA fa;
    FM fm;
    FP fp;
    T1 idx;
    T2 idm;
    vector<T1> data;
    vector<T2> lazy;
    // 単位元埋め
    LazySegTree2 (int n,T1 _idx,T2 _idm,FX _fx,FA _fa,FM _fm,FP _fp):idx(_idx),idm(_idm),fx(_fx),fa(_fa),fm(_fm),fp(_fp){
        siz = 1;
        while(siz < n){
            siz *= 2;
        }