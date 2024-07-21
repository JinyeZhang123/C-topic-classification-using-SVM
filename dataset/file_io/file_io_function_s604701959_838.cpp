int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int x;
    cin>>x;
    vi dp(x+1,0);
    dp[100] = dp[101] = dp[102] = dp[103] = dp[104] = dp[105] = 1;

    for(int i=200;i<=x;i++){
        if(dp[i-100]!=0 || dp[i-101]!=0 || dp[i-102]!=0 ||dp[i-103]!=0 || dp[i-104]!=0 ||dp[i-105]!=0)  dp[i] = 1;
    }