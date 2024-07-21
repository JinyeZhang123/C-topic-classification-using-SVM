int main(){
    IO
    ofstream fout("a.out");
    ll N,ans=0;
    cin>>N;
    memset(count_div,0,sizeof count_div);

    era();

    for(ll i=2;i<=100;i++) if(prime[i]) v.push_back(i);

    for(ll i=2;i<=N;i++) cnt(i);
    //for(ll i=0;i<=100;i++) fout<<i<<" "<<count_div[i]<<endl;
    ll M=v.size();
    for(ll i=0;i<M;i++) if(count_div[v[i]]+1>=75) ans++;
    for(ll i=0;i<M;i++){
        for(ll j=0;j<M;j++){
            if(i==j) continue;

            if(count_div[v[i]]+1>=3 && count_div[v[j]]+1>=25) {
                    ans++;
                    //cout<<v[i]<<" "<<v[j]<<endl;
            }