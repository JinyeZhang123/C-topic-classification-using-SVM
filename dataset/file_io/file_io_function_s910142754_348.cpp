int main(){
    //ifstream cin(NAME".inp");
    //ofstream cout(NAME".out");

    string  x;
    int d;
    cin>>x;
    cin>>d;
    ll cur = 0;
    vector<ll> tmp(d,0);
    vector<ll> dp(d,0);
    for(int i=0;i<x.len;i++){

        for(int j = 0;j<d;j++)
            for(int k=0;k<=9;k++) addmod(tmp[ (j+k)%d  ], dp[j]);

        for(int j = 0;j<x[i]-'0';j++) addmod( tmp[(cur + j)%d],1LL);
        dp = tmp;
        fill(tmp.begin(),tmp.end(),0);
        //addmod(cur,0LL+x[i]-'0');
        cur = (cur + x[i]-'0')%d;
    }