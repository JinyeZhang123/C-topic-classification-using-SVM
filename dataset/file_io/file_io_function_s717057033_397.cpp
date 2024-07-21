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
    {
        cin >> a[i] >> b[i];
        suma += a[i];
        sumb += b[i];
        srt.pb({a[i], i}