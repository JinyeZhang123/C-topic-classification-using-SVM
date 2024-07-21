int main()
{
 
    // ifstream cin("a.in");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    cin >> h >> w >> n;
    for(int i = 1; i <= n; ++i)
    {
        int a, b;
        cin >> a >> b;
        s[b].insert(a);
    }