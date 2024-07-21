int main()
{
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(12);
    cin.tie();
    cout.tie();
    // ifstream cin("in.txt");
    // ofstream cout("out.txt");
    
    
    int t;
    cin >> t;
    for (int qwe = 0; qwe < t; qwe++)
    {
        // cout << "Case #" << qwe + 1 << ": ";
        long long n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        set<long long> st;
        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
        pq.push({ 0, n }