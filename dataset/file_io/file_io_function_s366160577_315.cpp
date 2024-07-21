int main(){
    //ifstream fin("in.txt");

    auto n = 0;
    cin >> n;

    for(auto i = 0; i < n; i++){
        auto num = 0;
        cin >> num;
        cout << search(num) << endl;
    }