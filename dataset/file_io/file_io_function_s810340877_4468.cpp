int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int N;
    cin >> N;
    vector<int> C(9, 0);
    rep(i, N){
        int a; cin >> a;
        int m = 400;
        rep(j, 9) {
            if(a < m) {C[j]++; break;}