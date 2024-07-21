int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll A, B, C;
    cin >> A >> B >> C;
    
    ll res = 0;
    if(A == B && B == C && C == A && A%2 == 0) res = -1;
    else {
        while(A%2 == 0 && B%2 == 0 && C%2 == 0){
            ll As = A;
            ll Bs = B;
            ll Cs = C;
            A = (Bs+Cs)/2;
            B = (Cs+As)/2;
            C = (As+Bs)/2;
            res++;
        }