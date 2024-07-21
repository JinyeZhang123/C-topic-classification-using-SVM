template <class T>
void print(vector<T> &vec, int inc = 0, bool lb = true)
{
    for (auto v : vec)
        cout << v + inc << " ";
    if (lb)
        cout << newl;
}