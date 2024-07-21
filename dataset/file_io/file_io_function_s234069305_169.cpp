int main() {
	// your code goes here
	//ifstream cin("input.txt");
	//ofstream cout("output.txt");
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	
	int n,A; cin>>n>>A;
	ll a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	
	for(int i=0;i<=n;i++)
	{
	    for(int j=0;j<=i;j++)
	    {
	        if(i==0 || j==0){ dp[i][j][0]=1; continue; }