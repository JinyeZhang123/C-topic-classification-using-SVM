int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    int H, W;
    cin >> H >> W;
    ll res = ((ll)H*(ll)W+1)/2;
    if(H == 1 || W == 1) cout << 1 << endl;
    else cout << res << endl;
}