int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    string S, T;
    cin >> S >> T;
    int q;
    cin >> q;

    vector<int> cumsum_s_a(S.size()+1);
    vector<int> cumsum_s_b(S.size()+1);
    REP(i, S.size()){
        cumsum_s_a[i+1] = cumsum_s_a[i] + (S[i] == 'A');
        cumsum_s_b[i+1] = cumsum_s_b[i] + (S[i] == 'B');
    }