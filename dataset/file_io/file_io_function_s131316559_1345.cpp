int main() {

//    ifstream myfile("C:\\Users\\riku\\Downloads\\06.txt");
//    ofstream outfile("..\\log.txt");

    ll q;
//    myfile >> q;
    cin >> q;

    rep(i, q) {
        ll a, b;
        cin >> a >> b;
//        myfile >> a >> b;
        if (a > b) {
            swap(a, b);
        }