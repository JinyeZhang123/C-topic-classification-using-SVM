int main()
{
    //ofstream out("output.txt");
    //ifstream in("input.txt");
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,a;
    cin>>n;
    map<LL,int> mp;
    loop(i,0,n)
    {
        cin>>a;
        ++mp[a];
    }