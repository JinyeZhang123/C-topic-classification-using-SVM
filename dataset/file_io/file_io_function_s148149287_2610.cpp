int main(int argc, const char * argv[])
{
    //scanf("%s",S);
    //scanf("%d",&N);
    //scanf("%lld %lld",&target1,&target2);
    //sscanf(tmp.c_str(),"%dd%d%d",&time[i], &dice[i], &z[i]);
    //getline(cin, target);
    ifstream ifs("01");//テスト用
    //ifs >> a;
    //ここから
    
    //入力高速化
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll N,K;
    cin>>N>>K;
    ll ans=0;
    for(ll i=K;i<=N+1;i++){
        ll mini=(0+i-1)*i/2;
        ll maxi=(N+N-i+1)*i/2;
        ans+=maxi-mini+1;
        ans%=1000000007;
    }