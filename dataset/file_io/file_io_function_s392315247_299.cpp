int main(){
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)cin >> a[i] >> b[i];
    ll ans = 0;
    for(int i = n;i >= 1;--i){
        ans += ((b[i] - (a[i] + ans) % b[i]) % b[i]);
    }