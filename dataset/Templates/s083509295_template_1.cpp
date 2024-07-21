template<class T>
class BIT {
    vector<T> bit;
public:
    BIT(int n): bit(vector<T>(n+1, 0)){}