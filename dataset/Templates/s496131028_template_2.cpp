template <typename U>
class BIT_sec {
public:
    int n;
    BIT<U> bit0, bit1;
    BIT_sec(int n_) {
        n = n_;
        bit0 = BIT<U>(n);
        bit1 = BIT<U>(n);
    }