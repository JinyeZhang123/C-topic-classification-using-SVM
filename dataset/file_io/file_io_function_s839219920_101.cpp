int main() {
    // input from txt （提出時にこの箇　所は削除すること）
    ifstream in("Input.txt");
    cin.rdbuf(in.rdbuf());
 
    // cinを高速にするためのおまじない
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    /////////////////////
    // Write code below /
    int X;
    cin >> X;
    
    if(X >= 30){
        cout << "Yes" << endl;
    }