int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<bool> vis(101, false);
    int cnt=0;
    for(int i=a;i<=b;i++)   vis[i] = true;
    for(int i=c;i<=d;i++)   if(vis[i])  cnt++;
    if(cnt>0)   cnt--;
    cout<<cnt<<endl;
    return 0;
}