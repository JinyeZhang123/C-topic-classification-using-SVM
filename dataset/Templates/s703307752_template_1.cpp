template<typename T>
class BIT {
public:
    explicit BIT(int n) : N(calcN_(n)), mVal(calcN_(n)+1, 0) {}