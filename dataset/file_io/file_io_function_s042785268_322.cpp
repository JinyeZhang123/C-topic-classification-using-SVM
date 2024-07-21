int main(){
    //ifstream cin(NAME".inp");
    //ofstream cout(NAME".out");
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];

    dp[0][k]=1;

    for(int i=1;i<=n;i++){

        for(int j=0;j<=k;j++){
            int L = max(0, j-a[i] );
            tmp[L] = ( tmp[ L ] + dp[i-1][j] )%mod;
            if (j+1<=k) tmp[j+1] = ( tmp[j+1] - dp[i-1][j]+ mod)%mod;
        }