int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    int A, B, M;
    cin >> A >> B >> M;
    int a[A], b[B], am = INF, bm = INF;
    for(int i=0; i<A; i++) {cin >> a[i]; if(am > a[i]) am = a[i];}