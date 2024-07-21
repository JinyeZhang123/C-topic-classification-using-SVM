template <class T> int streamvec(std::istream& in, std::vector<T> &v)
{
    v.clear();
    string s;

    if (!in) {
        cerr << "invalid istream" << endl;
        return 1;
    }