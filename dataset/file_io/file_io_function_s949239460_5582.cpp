int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int K; cin >> K;
    int cnt = 0;
    queue<ll> que;
    repm(i, 1, 10) que.push(i);
    while(cnt < K-1){
        ll num = que.front(); que.pop(); cnt++;
        int nr = num%10;
        if(nr != 0) que.push(10*num + nr-1);
        que.push(10*num + nr);
        if(nr != 9) que.push(10*num + nr+1);
    }