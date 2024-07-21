template <typename T>
void output(T a, int precision) {
    if(precision > 0){
        cout << fixed << setprecision(precision)  << a << "\n";
    }