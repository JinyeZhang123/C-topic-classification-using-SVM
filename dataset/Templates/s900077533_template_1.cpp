template<typename T>
class LazySegmentTree{
    std::vector<T> data;
    std::vector<T> lazy;
    int size;
    int binSize;
    T initial;

    void eval(int L,int R,T X){
        if(L > R)std::swap(L,R);
        int Lidx = 1;
        int Ridx = 1;
        T LX = X*(R-L+1);
        T RX = 0;
        std::pair<int,int> LRange = std::make_pair(1,binSize);
        std::pair<int,int> RRange = std::make_pair(1,binSize);
        while(Lidx < binSize && Ridx < binSize){
            data[Lidx] += lazy[Lidx];
            lazy[Lidx*2] += lazy[Lidx]/2;
            lazy[Lidx*2+1] += lazy[Lidx]/2;
            lazy[Lidx] = initial;
            data[Ridx] += lazy[Ridx];
            lazy[Ridx*2] += lazy[Ridx]/2;
            lazy[Ridx*2+1] += lazy[Ridx]/2;
            lazy[Ridx] = initial;
            if(Lidx == Ridx){
                data[Lidx] += LX;
                std::pair<int,int> nextLRange = std::make_pair(LRange.first,(LRange.first + LRange.second)/2);
                std::pair<int,int> nextRRange = std::make_pair(1 + (LRange.first + LRange.second)/2,LRange.second);
                bool LNext,RNext;
                if(nextLRange.first <= L && L <= nextLRange.second){
                    LNext = true;
                }