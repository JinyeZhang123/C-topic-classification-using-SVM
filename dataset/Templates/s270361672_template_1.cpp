template <typename T>
struct LazzySegTreeSum
{
  private:
    ll N = 1;
    vector<T> node,lazy;

  public:
    LazzySegTreeSum(vector<T> vec)
    {
        ll size = vec.size();

        while (N < size)
        {
            N *= 2;
        }