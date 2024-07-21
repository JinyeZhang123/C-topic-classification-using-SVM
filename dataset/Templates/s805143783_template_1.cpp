template<class T>
class SqrtDecomposition {
private:
    const size_t B, _size;
    T const init;
    vector<T> a, b;

public:
    SqrtDecomposition(const size_t size = 0,
               T const &init_ = numeric_limits<T>::max(),
               const size_t B_ = 310)
        : B(B_), _size(size), init(init_),
          a(size, init), b(size/B + 1, init){}