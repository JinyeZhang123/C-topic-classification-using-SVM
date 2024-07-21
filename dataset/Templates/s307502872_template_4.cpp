template <class T> struct BIT {
    vector<T> dat;

    BIT(int n) {
        dat.resize(n + 1);
        for(int i = 0; i < (int)dat.size(); i++)
            dat[i] = 0;
    }