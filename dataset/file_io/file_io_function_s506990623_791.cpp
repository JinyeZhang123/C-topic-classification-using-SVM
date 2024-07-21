int main()
{

    #ifdef fisier
        ifstream f("input.in");
        ofstream g("output.out");
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> v[i];
    sort(v + 1, v + n + 1);
    int st = 1;
    int dr = n-1;
    int ans = 1;
    while(st <= dr)
    {
        int mid = (st + dr) / 2;
        if(v[mid] <= v[n] / 2)
            ans = mid, st = mid + 1;
        else
            dr = mid - 1;
    }