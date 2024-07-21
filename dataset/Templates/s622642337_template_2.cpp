template <class T>
void scan(vector<T> &a)
{
    for (auto &i : a)
        scan(i);
}