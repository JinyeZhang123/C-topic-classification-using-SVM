int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    string S;cin>>S;
    int K;cin>>K;
    S='0'+S;
    S+='0';
    
    vector<int> cnt,can;
    for(int i=0;i<si(S);i++){
        if(S[i]=='1') continue;
        for(int j=i+1;j<si(S);j++){
            if(S[j]=='0'){
                cnt.push_back(j-i-1);
                break;
            }