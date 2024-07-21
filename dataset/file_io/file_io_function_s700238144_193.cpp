int main() {
#ifdef MYLOCAL
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
#endif
    int N, L ,T;
    cin >> N >> L >> T;
    vector<int> X(N);
    vector<int> W(N);
    for (int i = 0; i < N; ++i){
        cin >> X[i] >> W[i];
    }