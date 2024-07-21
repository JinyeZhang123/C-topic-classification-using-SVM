int main() {

    // input from txt （提出時にこの箇所は削除すること）
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    
    int64_t N, M;
    cin >> N >> M;
    COMinit();
    
    int64_t n = M;
    
    //素因数分解
    map<int64_t,int64_t> mp;
    int a = 2;
    while(n >= a*a){
      if(n %a == 0){
        if(mp.count(a)){
          mp[a]++;
        }