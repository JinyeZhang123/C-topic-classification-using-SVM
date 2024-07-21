int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, x;
    cin >> N >> x;
    int a[N];
    for(int i=0; i<N; i++) cin >> a[i];
    sort(a, a+N);
    
    int res = 0;
    while(true){
        if(x >= a[res] && res < N-1) {x -= a[res]; res++;}