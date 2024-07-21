int main() {

    // input from txt （提出時にこの箇所は削除すること）
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    
    string S;
    cin >> S;
    int64_t a = 0;
    int64_t sum_b = 0;
    int64_t ans = 0;
    int64_t Q_before = 0;
    int64_t Q_after = 0;
    int64_t C = 0;

    
    for(int i=0; i<S.size(); i++){
        if(S.at(i) == '?'){
            Q_after++;
        }