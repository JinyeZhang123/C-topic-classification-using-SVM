template<typename T>
class bit{
    public:
        T array[(1 << 17) + 1];
        int n;
        bit(int m) {n = m;}