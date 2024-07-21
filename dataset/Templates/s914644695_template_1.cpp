template <typename T>
struct RUQ //calculateはminimum
{
    int n;
    const T ex = 1 << 30; //dat 初期値(minなので)
    const T em = 1 << 30; //lazy 初期値(minなので)
    vector<T> dat, lazy; //tree本体
    RUQ(vector<T> v){
        int x = 1;
        int i;
        n = v.size();
        while(x < n) x <<= 1;
        n = x; 
        dat.resize(2*n-1, ex);
        lazy.resize(2*n-1, em);
        for(i = 0;i < v.size();++i){
            dat[i + n - 1] = v[i];
        }