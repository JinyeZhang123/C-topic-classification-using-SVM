int main() {

    //input from txt （提出時にこの箇所は削除すること）
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    
    int N;
    cin >> N;
    int64_t MINF = -1e9;
    map<int64_t,int64_t> mp;
    vector<int64_t> vec(N+2,MINF);
    for(int i=1; i<N+1; i++){
        cin >> vec[i];
        mp[vec[i]] = i;
    }