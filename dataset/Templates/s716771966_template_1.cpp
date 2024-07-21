template<typename T>
class BIT {
private:
  vector<T> bit;
public:
  BIT(const int n) : bit(n + 10) {}