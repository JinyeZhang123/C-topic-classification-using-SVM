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
    
    ll x,y;
    cin>>x>>y;
    
    ll i=0;
    ll j=0;
    ll a,b;
    ll f=0;
    while(i<=x&&j<=y){
        if(2*(x-i)==(y-j)){
            a=j;
            b=(x-i);
            f=1;
            break;
        }