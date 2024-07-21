int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,Q,A,B;cin>>N>>Q>>A>>B;
    A--;B--;
    if(A>B) swap(A,B);
    vector<ll> S(Q+1);
    for(int i=0;i<Q;i++){
        cin>>S[i+1];
        S[i+1]--;
    }