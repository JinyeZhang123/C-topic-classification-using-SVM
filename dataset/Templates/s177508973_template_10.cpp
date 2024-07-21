template <class num_type> struct BIT {
    int n;
    vector<num_type> bit;
    num_type allsum;
    int maxbit = 1;
    BIT(int tmp) : n(tmp) {
        bit.assign(n + 1, 0);
        allsum = 0;
        while (maxbit * 2 <= n) { maxbit *= 2; }