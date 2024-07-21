template <typename T>
struct SegTreeMax
{
  private:
    ll N = 1;
    vector<T> node;

  public:
    SegTreeMax(vector<T> vec)
    {
        ll size = vec.size();

        while (N < size)
        {
            N *= 2;
        }