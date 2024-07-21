int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    ll N, A, B;
    cin >> N >> A >> B;
    
    if((B-A)%2 == 0) cout << (B-A)/2 << endl;
    else cout << min(A-1, N-B) + (B-A+1)/2 << endl;
}