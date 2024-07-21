template <class T = long long int>
class Bit {
    private:
    unsigned len;
    T init;
    std::vector<T> arr;

    public:
    Bit(unsigned length, T initialValue = 0): len(length), init(initialValue), arr(len + 1, init) {}