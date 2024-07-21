int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N, X, Y; cin >> N >> X >> Y;
    vector<int> res(N-1, 0);
    rep(i, N){
        repm(j, i+1, N){
            int d = min(j-i, abs((i+1)-X)+abs((j+1)-Y)+1);
            res[--d]++;
        }