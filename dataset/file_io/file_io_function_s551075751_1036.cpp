int main(){
#ifdef MYLOCAL
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
#endif
    cin >> N >> M;
    G.assign(N, vector<int>());
    for (int i = 0; i < M; ++i) {
        int a, b; cin >> a >> b; --a, --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }