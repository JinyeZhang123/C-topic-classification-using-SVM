template <class T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for (auto &e : v)
        cout << e << " ";
    cout << endl;
    return os;
}