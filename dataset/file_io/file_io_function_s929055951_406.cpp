int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,D;cin>>N>>D;
    vector<int> left(N),A(N),ok(N);
    for(int i=0;i<N;i++) cin>>A[i];
    int now=D;
    
    for(int i=0;i<N;i++){
        if(now>=A[i]) now-=A[i];
        else chmin(now,A[i]-now);
        
        left[i]=now;
    }