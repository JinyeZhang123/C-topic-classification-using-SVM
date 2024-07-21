int main(){
    //ifstream cin(NAME".inp");
    //ofstream cout(NAME".out");
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    double ans = 0;
    ans = a[0];
    for(int i=1;i<n;i++) ans = (ans+a[i])/2.0;
    cout<<ans;

}