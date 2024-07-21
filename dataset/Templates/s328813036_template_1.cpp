template <class T> T streamvar(std::istream& in)
{
    if (!in) {
        cerr << "invalid istream" << endl;
        exit(1);
    }