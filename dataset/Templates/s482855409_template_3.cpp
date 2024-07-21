template<class T,class L,class F,class G,class H>
struct LazySegmentTree{
    //データ
    int sz;
    int height;
    vector<T> seg;
    vector<L> lazy;
    const T sut;
    const L lut;
    const F f;
    const G g;
    const H h;

    LazySegmentTree(int n,const T sut,const L lut,const F &f,const G &g,const H &h):sut(sut),lut(lut),f(f),g(g),h(h){
        sz=1;
        height=0;
        while(sz<n) sz<<=1,height++;
        seg.assign((sz<<1),sut);
        lazy.assign((sz<<1),lut);        
    }