template <typename T>
class RMQ {
    public:
        int n;
        T dat[2 * (1 << 17) - 1];

        // ????´???° m ??? RMQ ?????????
        RMQ(int m) {
            n = 1;
            while(n < m) n *= 2;
            rep(i,0,2*n-1) dat[i] = INT_MAX;
        }