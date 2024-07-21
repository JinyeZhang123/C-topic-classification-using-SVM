int main(int argc, char* argv[]) {
#ifdef VLAD_LOCAL
    ifstream in("in.txt");
    auto start = std::chrono::steady_clock::now();
#else
    istream &in = cin;
#endif
    int n, q;
    in >> n >> q;

    vector<S> a(n, S{ 1,10,1 }