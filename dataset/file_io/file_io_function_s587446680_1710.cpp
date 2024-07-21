int main()
{
 
   // ifstream cin("a.in");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> v[i];
    int st = 1;
    int dr = n;
    int ans = n;
    while(st <= dr)
    {
        int mid = (st + dr) / 2;
        if(chk(mid))
            ans = mid, dr = mid - 1;
        else
            st = mid + 1;
    }