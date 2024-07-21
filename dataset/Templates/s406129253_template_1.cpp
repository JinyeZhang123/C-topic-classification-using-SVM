template<typename T>
struct SegmentTree{
    vector<T> node;
    ll cou;
    ll size;
    SegmentTree(int n=1, T first_value = 0 ){
        cou = 0;
        while( n > (int)pow(2,cou) ) cou++;
        cou++;
        node.resize((int)pow(2,cou),first_value);
        size = (int)pow(2,cou);
    }