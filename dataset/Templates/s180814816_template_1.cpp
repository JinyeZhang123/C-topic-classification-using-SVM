template<typename T>
struct BIT {
    int n;
    vector<T> dat;

    BIT(int n=0){
        initialize(n);
    }