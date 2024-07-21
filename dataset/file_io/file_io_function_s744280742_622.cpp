int main(){
    //fstream cin(NAME".inp");
    //ofstream cout(NAME".out");
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) cin>>mx[i][j];
    vector<int> id;
    ll tmp;
    int subs;
    for(int i = 0;i<(1<<n);i++){
        for(int j = 0;j<n;j++)
            if(i>>j&1) id.emplace_back( j );
        tmp = 0;
        for(int j = 0; j<id.size() ; j++){
            for(int k = j+1;k<id.size();k++)
                tmp+= mx[ id[j] ][ id[k] ];
        }