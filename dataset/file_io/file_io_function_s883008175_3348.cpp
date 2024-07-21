int main(int argc, const char * argv[])
{
    //scanf("%s",S);
    //scanf("%d",&N);
    //scanf("%lld %lld",&target1,&target2);
    //sscanf(tmp.c_str(),"%dd%d%d",&time[i], &dice[i], &z[i]);
    //getline(cin, target);
    //ifstream ifs("05");//テスト用
    //ifs >> a;
    //ここから
    
    //入力高速化
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N,M;
    cin>>N>>M;
    for(int i=0;i<M;i++){
        int t1,t2;
        cin>>t1>>t2;
        t1--;t2--;
        G[t1].push_back(N+t2);
        G[N+t1].push_back(2*N+t2);
        G[2*N+t1].push_back(t2);
    }