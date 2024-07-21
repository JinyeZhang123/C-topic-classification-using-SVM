template<typename M>
class SegmentTree {
private:
    vector<M> data;
    const function<M(M, M)> merge;
    const M identity_element;
    size_t base_data_size;

    void data_size_calc_and_init(size_t N) {
        base_data_size = 1;
        while (base_data_size < N) base_data_size <<= 1;
        data = vector<M>(2 * base_data_size, identity_element);
    }