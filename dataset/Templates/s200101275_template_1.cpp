template<typename T>
class Segtree {
public:
    Segtree(li n, T default_value, T invalid_value, std::function<T(T, T)> func_) {
        nn = 1;
        while (nn < n) {
            nn *= 2;
        }