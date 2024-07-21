int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int X; cin >> X;
    bool fg = false;
    repm(i, -1000, 1000) {
        repm(j, -1000, 1000) {
            ll il = (ll)i, jl = (ll)j;
            ll res = (ll)powl(il, 5) - (ll)powl(jl, 5);
            if(X == res) {cout << i << " " << j << endl; fg = true; break;}