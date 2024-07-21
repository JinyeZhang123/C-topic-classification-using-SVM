int main(){
#ifdef MYLOCAL
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
#endif
    cin >> N >> K;
    tree.assign(N, vector<int>());
    for (int i = 0; i < N-1; ++i) {
        int a, b; cin >> a >> b; --a, --b;
        tree[a].push_back(b); tree[b].push_back(a);
    }