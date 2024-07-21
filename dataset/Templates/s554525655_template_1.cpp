template <typename T>
class BIT
{
  private:
    vector<T> array;
    int N;

  public:
    BIT(int size) : array(size + 1, 0), N(size) {}