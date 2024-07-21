template <class T>
bool chmax(T &a, const T &b) //最大値更新 返り値はbool
{
    if (a < b)
    {
        a = b;
        return 1;
    }