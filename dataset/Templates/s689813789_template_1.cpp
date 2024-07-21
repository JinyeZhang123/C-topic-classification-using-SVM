template <class T> class RangeSumQuery {
    vector<T> bit_sum; int size;
public:
    RangeSumQuery(int n):size(n+1),bit_sum(n+10,0){}