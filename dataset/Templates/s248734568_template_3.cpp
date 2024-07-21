template<typename T>
class BinaryIndexedTree{
  private:
  ll N;
  T dat[NMAX + 1]; // 1 origin, A[i] = sum(i) - sum(i-1)

  public:
  void init(ll _N){
      N = _N;
      Fill(dat, 0);
  }