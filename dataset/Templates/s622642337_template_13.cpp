template <class T, class S>
ostream &operator<<(ostream &os, const pair<T, S> &p)
{
    cout << "(" << p.fi << ", " << p.se << ")";
    return os;
}