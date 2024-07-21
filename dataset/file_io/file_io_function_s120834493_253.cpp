int main(){

#if DEBUG
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    ll t1,t2,a1,a2,b1,b2;
    ll res;
    cin >> t1 >> t2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;

    ll p,q;
    p = (a1 - b1) * t1;
    q = (a2 - b2) * t2;

    if(p + q == 0)
    {
        cout << "infinity" << endl;
        return 0;
    }