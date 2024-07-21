template <typename T>
inline void output(T a, int p) {
    if(p){
        cout << fixed << setprecision(p)  << a << "\n";
    }