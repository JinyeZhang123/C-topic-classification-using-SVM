int main(){
    //ifstream cin(NAME".inp");
    //ofstream cout(NAME".out");
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<=k;i++){
        for(int j = 0;j<n && i - a[j] >=0 ;j++)
            if(!first[ i - a[j] ]) {
                    first[i] = true;
                    break;
            }