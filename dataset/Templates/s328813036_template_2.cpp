template <class T> void streamvec(std::istream& in, std::vector<T> &v)
{
    string s;

    if (!in) {
        cerr << "invalid istream" << endl;
        exit(1);
    }