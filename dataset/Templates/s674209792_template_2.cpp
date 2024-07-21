template <class T>
bool chmin(T &a, const T &b) //最小値更新 返り値はbool
{

    if (b < a)
    {
        a = b;
        return 1;
    }