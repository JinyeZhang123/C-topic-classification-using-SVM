template <typename T>
class BIT
{
  private:
    int N;
    vector<T> node;

  public:
    //BIT(int size) : node(size + 1, 0), N(size) {}