int main(int argc, const char * argv[])
{
    //scanf("%s",S);
    //scanf("%d",&N);
    //scanf("%lld %lld",&target1,&target2);
    //sscanf(tmp.c_str(),"%dd%d%d",&time[i], &dice[i], &z[i]);
    //getline(cin, target);
    //ifstream ifs("b23");//テスト用
    //ifs >> a;
    //ここから
    
    //入力高速化
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll N,M,P;
    cin>>N>>M>>P;
    for(int i=0;i<M;i++){
        int a,c;
        edge e;
        cin>>a>>e.to>>c;
        e.cost=P-c;
        G[a].push_back(e);
    }