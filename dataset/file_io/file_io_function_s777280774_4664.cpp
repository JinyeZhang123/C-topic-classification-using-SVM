int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N; cin >> N;
    vector<int> res(N+1, 0);
    
    repm(x, 1, 105){
        repm(y, 1, 105){
            repm(z, 1, 105){
                int c = x*x + y*y + z*z + x*y + y*z + z*x;
                if(c <= N) res[c]++;
            }