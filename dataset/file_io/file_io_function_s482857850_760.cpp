int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll D;cin>>D;
    if(D%9){
        cout<<0<<endl;
        return 0;
    }