int main(){
    //ifstream cin(NAME".inp");
    //ofstream cout(NAME".out");
    cin>>n;
    int tmp;

    for(int i=0;i<=300;i++)for(int j=0;j<=300;j++)for(int k=0;k<=300;k++) dp[i][j][k]=0;

    for(int i=0;i<n;i++) cin>>tmp,cnt[tmp]++;
    cout<<setprecision(12)<<fixed<<cal(cnt[1],cnt[2],cnt[3]);

}