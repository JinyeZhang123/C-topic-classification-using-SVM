template<typename T> class BIT {
private:
    int n,m; vector<vector<T> > bit;
public:
    void add(int i, int j, T val){
        for(int i_ = i+1; i_ < n; i_ += i_ & -i_)
            for(int j_ = j+1; j_ < m; j_ += j_ & -j_)
                bit[i_][j_] += val;
    }