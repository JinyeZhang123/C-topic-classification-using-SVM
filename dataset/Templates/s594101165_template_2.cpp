template<typename T> class BIT_2D_RangeAdd_RangeSum {
private:
    int n,m;
    void add(BIT<T>& bit,int lx, int ly, int rx, int ry, T val){
        bit.add(lx, ly, val), bit.add(lx, ry, -val);
        bit.add(rx, ly, -val), bit.add(rx, ry, val);
    }