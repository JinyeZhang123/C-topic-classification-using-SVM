int main()
{
    //ofstream out("output.txt");
    //ifstream in("input.txt");
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, k;
    cin>>n>>k;
    int a[n], mx = 0;
    loop(i,0,n) {cin>>a[i]; mx = max(mx,a[i]);}