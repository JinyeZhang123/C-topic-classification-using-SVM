template <class T> int streamvar(std::istream& in, T& var)
{
    if (!in) {
        cerr << "invalid istream" << endl;
        return 1;
    }