int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N;
    cin >> N;
    vector<XYD> input(N);
    REP(i, N) {
        cin >> input[i].x >> input[i].y >> input[i].d;
    }