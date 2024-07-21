int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int A, B;
    cin >> A >> B;

    if (A % 3 == 0 || B % 3 == 0 || (A+B) % 3 == 0){
        print("Possible");
    }