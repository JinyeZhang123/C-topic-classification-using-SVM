int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    //ifstream fin("data.in");
    //ofstream fout("data.out");
    cin >> N;
    rep(i,0,N,1) {
        cin >> arr[i].h;
        arr[i].h--;
    }