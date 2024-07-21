template <typename T>
struct SegTreeMin
{
  private:
    int N = 1;
    vector<T> node;

  public:
    SegTreeMin(vector<T> vec)
    {
        int size = vec.size();

        while (N < size)
        {
            N *= 2;
        }