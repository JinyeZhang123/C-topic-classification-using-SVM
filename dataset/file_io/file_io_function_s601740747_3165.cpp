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
    
    ll n,a,b;
    cin>>n>>a>>b;
    ll all=mod_pow(2,n,1000000007);
    all+=1000000007;
    all-=cmb(n,a);
    all%=1000000007;
    all+=1000000007;
    all-=cmb(n,b);
    all%=1000000007;
    cout << all-1 << endl;
    //ここまで
    //cout << "ans" << endl;
    //cout << " " << "ans" << endl;
    //printf("%.0f\n",ans);//小数点以下表示なし
    //printf("%.7f\n",p);
    
    return 0;
}