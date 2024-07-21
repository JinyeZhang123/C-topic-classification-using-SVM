int main(int argc, const char * argv[])
{
    //scanf("%s",S);
    //scanf("%d",&N);
    //scanf("%lld %lld",&target1,&target2);
    //sscanf(tmp.c_str(),"%dd%d%d",&time[i], &dice[i], &z[i]);
    //getline(cin, target);
    //ifstream ifs("01");//テスト用
    //ifs >> a;
    //ここから
    
    //入力高速化
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N,u,v;
    cin>>N>>u>>v;
    u--;v--;
    for(int i=0;i<N-1;i++){
        int t1,t2;
        cin>>t1>>t2;
        t1--;t2--;
        G[t1].push_back(t2);
        G[t2].push_back(t1);
    }