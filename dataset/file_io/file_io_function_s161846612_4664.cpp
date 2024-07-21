int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N, K, S; cin >> N >> K >> S;
    rep(i, K) cout << S << " ";
    repm(i, K, N) cout << (S == pow(10,9) ? S-1 : S+1) << " ";
    cout << endl;
}