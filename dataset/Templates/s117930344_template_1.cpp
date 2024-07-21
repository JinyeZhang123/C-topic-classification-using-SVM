template <typename T>
class segtree
{
  private:
    std::size_t N;
    std::vector<T> data;

    T query(std::size_t a, std::size_t b, std::size_t k, std::size_t l, std::size_t r)
    {
        if (r <= a || b <= l)
        {
            return std::numeric_limits<T>::max();
        }