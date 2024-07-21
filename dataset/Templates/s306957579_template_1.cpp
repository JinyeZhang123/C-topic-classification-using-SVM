template<class T,class E> struct LSeg{
    typedef function<T(T,T)> F;
    typedef function<T(T,E)> G;
    typedef function<E(E,E)> H;
    typedef function<E(E,int)> P;
    int n;F f;G g;H h;T et;E ee;P p;
    vector<T> dat;
    vector<E> lazy;
    LSeg(int n_,F f_,G g_,H h_,T et_,E ee_,P p_=[](E a,int b){return a;}