template<typename T>
struct SecAddBIT{
    private:
        using Func = function<T(T, T)>;
        using MulInt = function<T(T,int)>;
        using Unary = function<T(T)>;
        BIT<T> bit0, bit1;
        Func _add;
        MulInt _mul;
        Unary _inv;

    public:

        SecAddBIT(vector<T> a, Func add_func, MulInt mul_func, Unary inv, T _init_v) {
            int n = a.size();
            _add = add_func;
            _mul = mul_func;
            _inv = inv;
            bit0 = BIT<T>(a, add_func, _init_v);
            bit1 = BIT<T>(vector<T>(n,0), add_func, _init_v);
        }