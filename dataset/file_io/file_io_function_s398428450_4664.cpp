int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N; cin >> N;
    queue<pair<string, int>> queue;
    queue.push(make_pair("a", 0));
    
    while(true){
        string s; int mc;
        tie(s, mc) = queue.front();
        if((int)(s.size()) == N) break;
        
        rep(j, mc+2) queue.push(make_pair(s + itocl(j), max(mc, j)));
        queue.pop();
    }