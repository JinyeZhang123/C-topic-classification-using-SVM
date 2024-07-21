template <typename T>
class BIT {
    private:
        unsigned size_;
        std::vector<T> v;

        T sum(unsigned r) {
            T ret = 0;
            while (r > 0) {
                ret += v[r];
                r -= r & (-r);
            }