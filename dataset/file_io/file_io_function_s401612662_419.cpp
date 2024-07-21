int main(){
    //ifstream cin(NAME".inp");
    //ofstream cout(NAME".out");
    int n,k;
    cin>>n>>k;
    //cout<<n<<" "<<k<<endl;
    for(int i=1;i<=n;i++) cin>>a[i];
    dp[0][k]=1;
    for(int i=1;i<=n;i++){

        for(int j=0;j<=k;j++){
            add(tmp[ max(0,j-a[i]) ], dp[i-1][j] );
            if (j+1<=k) add(tmp[j+1],-dp[i-1][j]);
            /*
            tmp[ max(0,j-a[i] ) ] += dp[i-1][j];
            if (j+1<=k) tmp[j+1] -= dp[i-1][j];
            */
        }