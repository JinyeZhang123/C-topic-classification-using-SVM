template<class T>
class lpsg_tree {
private:
    vector<T> lazy;
    vector<T> seg;
    T def;
    lli num;
    void push(lli k){
        if(lazy[k] == def) return;
        set(k*2+1,lazy[k]/2);
        set(k*2+2,lazy[k]/2);
        lazy[k] = def;
    }