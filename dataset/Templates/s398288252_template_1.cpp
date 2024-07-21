template <typename T>
struct BIT{
  private:
    vector<T> array;
    const ll n;
  public:
    BIT(ll _n):array(_n+1,0),n(_n){}