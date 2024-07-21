template<typename T>
class BIT
{
private:
    const int n;
    ::std::vector<T> data;
public:
    BIT(int n):n(n),data(n+1){
        for(int i=1; i<=n; i++) data[i] = 0;
    }