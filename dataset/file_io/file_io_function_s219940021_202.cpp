int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    if(x1>x2){
        swap(x1,x2);
        swap(y1,y2);
    }