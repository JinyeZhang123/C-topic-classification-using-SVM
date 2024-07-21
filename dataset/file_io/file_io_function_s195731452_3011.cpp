int main()
{
    //ofstream out("output.txt");
    //ifstream in("input.txt");
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int x1,y1,x2,y2;
    cin>>h>>w>>k>>x1>>y1>>x2>>y2;
    g.resize(h);
    loop(i,0,4)
    {
        l[i].resize(h,VI(w,-1));
        c[i].resize(h,VI(w,-1));
    }