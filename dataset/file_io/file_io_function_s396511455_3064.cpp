int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, M, X;
    cin >> N >> M >> X;
    int lc = 0, rc = 0;
    for(int i=0; i<M; i++) {
        int A; cin >> A;
        if(A < X) lc++;
        else rc++;
    }