int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin>>A[i];
    A.push_back(INF);
    sort(all(A));
    reverse(all(A));
    A.push_back(-INF);
    
    bool ans=true;
    
    int now=0;
    while(1){
        if(now+1<A[now+2]) now++;
        else{
            int a=A[now+1]-now-1,b=0;
            while(now<A[now+b+2]){
                b++;
            }