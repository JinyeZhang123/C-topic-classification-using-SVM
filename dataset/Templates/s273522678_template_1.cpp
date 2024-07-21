template<typename T, typename E>
class segment_tree{
    typedef function<T(T,T)> F; //要素に適用する演算
    typedef function<T(T,E)> G; //作用素の適用
    typedef function<E(E,E)> H; //作用素の合成
    typedef function<E(E,int)> P;
private:
    int num_of_elm_;
    vector<T> dat_, lazy_;
    F f_;
    G g_;
    H h_;
    P p_;
    T ident_;
    E op_ident_;
public:
    segment_tree(int n, F f, G g, H h, P p, T ident, E op_ident):f_(f), g_(g), h_(h), p_(p), ident_(ident), op_ident_(op_ident){
        num_of_elm_ = 1;
        while(num_of_elm_<n)num_of_elm_*=2;
        dat_ .resize(2*num_of_elm_,ident);
        lazy_.resize(2*num_of_elm_,op_ident);
    }