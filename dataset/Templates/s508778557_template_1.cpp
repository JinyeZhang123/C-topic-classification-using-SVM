template<typename T>
class RangeUpdateQuery {
public:
    explicit RangeUpdateQuery(int n, T def) : N(calcN_(n)) {
        mVal.assign(2*N+1, make_pair(-1, def));
    }