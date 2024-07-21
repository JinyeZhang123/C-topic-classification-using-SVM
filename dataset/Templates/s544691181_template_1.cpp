template<typename T>
struct BIT{
private:
  vector<T> A;
  const int n;
  
public:
  BIT(int _n) : A(_n+1,0), n(_n){}