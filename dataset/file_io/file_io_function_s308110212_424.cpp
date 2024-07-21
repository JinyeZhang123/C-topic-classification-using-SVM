int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    string S,T;cin>>S;
    T=S;
    reverse(all(T));
    
    for(int i=0;i<si(T);i++){
        if(T[i]=='b') T[i]='d';
        else if(T[i]=='d') T[i]='b';
        else if(T[i]=='p') T[i]='q';
        else T[i]='p';
    }