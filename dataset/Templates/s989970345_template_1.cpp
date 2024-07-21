template<typename T, typename U>
bool chmin(T& xmin, const U& x)
{
    if(x < xmin) {
        xmin = x;
        return true;
    }