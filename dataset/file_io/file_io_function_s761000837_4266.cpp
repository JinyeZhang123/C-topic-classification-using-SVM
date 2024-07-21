int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;
    
    ll M1 = min(4*Q, min(2*H, S));
    ll M2 = min(M1*2, D);
    
    ll res = N%2 == 0 ? N/2 * M2 : (N-1)/2 * M2 + M1;
    cout << res << endl;
}