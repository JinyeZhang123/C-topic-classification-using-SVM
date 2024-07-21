int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int N; cin >> N;
    ll res = (ll)pow(3, N);
    ll allodd = 1;
    rep(i, N){
        int A; cin >> A;
        allodd *= A%2 == 0 ? 2 : 1;
    }