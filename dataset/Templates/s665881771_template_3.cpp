template<typename T,typename E>
struct lazysegtree{
using F=function<T(T,T)>;
using G=function<T(T,E)>;
using H=function<E(E,E)>;
int n,height;
F f;G g;H h;T t;E e;
vector<T> dat;
vector<E> laz;
lazysegtree(int n_,F f,G g,H h,T t,E e):f(f),g(g),h(h),t(t),e(e){
    n=1;height=0;
    while(n<n_)n*=2,height++;
    dat.assign(2*n,t);
    laz.assign(2*n,e);
}