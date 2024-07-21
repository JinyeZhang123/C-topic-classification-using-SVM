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
    
    string A;
    cin>>A;
    
    dp[0][0][0]=1;//(-1)桁目に0があるものとしてカウントしている
    //2列目からは条件ごとに満たす満たさない数を格納
    for(int i=0;i<A.size();i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                int lim=j ? 1:A[i]-'0';
                for(int p=0;p<lim+1;p++){

                        if(p==1){
                            dp[i+1][j || p<lim][k || p==1]+=2*dp[i][j][k];
                            dp[i+1][j || p<lim][k || p==1]%=1000000007;
                        }