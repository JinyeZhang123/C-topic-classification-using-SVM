class SumofIntegers{
public:
    void solve(){
        dfs(0,0,0);
        cout<<ans<<endl;
        ans=0;
    }