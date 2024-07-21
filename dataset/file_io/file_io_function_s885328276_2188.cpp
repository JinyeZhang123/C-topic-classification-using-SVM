int main(int argc, const char * argv[])
{
    //scanf("%s",S);
    //scanf("%d",&N);
    //scanf("%lld %lld",&target1,&target2);
    //sscanf(tmp.c_str(),"%dd%d%d",&time[i], &dice[i], &z[i]);
    //getline(cin, target);
    //ifstream ifs("a.txt");//テスト用
    //ifs >> a;
    //ここから
    
    //入力高速化
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N,K,L;
    cin >> N >> K >> L;
    
    int tmp[100000],tmp2[100000];
    int ttmp[100000],ttmp2[100000];
    for(int i=0;i<K;i++){
        cin >> tmp[i]>>tmp2[i];
    }