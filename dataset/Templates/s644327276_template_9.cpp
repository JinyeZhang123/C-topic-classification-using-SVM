template<typename Monoid,typename Action,typename F,typename G,typename H>
struct LazySegmentTree{
    int sz;
    vector<Monoid> node;
    vector<Action> lazy;
    const F FM;//モノイド同士の演算
    const G FA;//モノイドへの作用
    const H FL;//作用の合成
    const Monoid UNITY_MONOID;//モノイドの単位元
    const Action UNITY_ACTION;//作用素の単位元

    LazySegmentTree(int n,const F FM,const G FA,const H FL,const Monoid &UNITY_MONOID,const Action &UNITY_ACTION)
    :FM(FM),FA(FA),FL(FL),UNITY_MONOID(UNITY_MONOID),UNITY_ACTION(UNITY_ACTION){
        sz=1;
        while(sz<n) sz*=2;
        node.assign(2*sz,UNITY_MONOID);
        lazy.assign(2*sz,UNITY_ACTION);
    }