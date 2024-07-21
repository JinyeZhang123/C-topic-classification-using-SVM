int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, A, B;
    string S;
    cin >> N >> A >> B >> S;
    
    int pcnt = 0, bcnt = 0;
    for(int i=0; i<N; i++){
        switch(S[i]){
            case 'a':
                if(pcnt < A+B) {cout << "Yes" << endl; pcnt++;}