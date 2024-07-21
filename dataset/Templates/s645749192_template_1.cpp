template <typename T>
struct RAQ //calculateはadd(区間加算 not update)
{
    int n;
    const T ex = 0; //初期値
    vector<T> dat, lazy; //tree本体
    RAQ(vector<T> v){
        int x = 1;
        int i;
        n = v.size();
        while(x < n) x <<= 1;
        n = x; 
        dat.resize(2*n-1, ex);
        lazy.resize(2*n-1, ex);
        for(i = 0;i < v.size();++i){
            dat.at(i + n - 1) = v.at(i);
        }