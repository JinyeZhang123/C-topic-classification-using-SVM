int main(){
    //ifstream cin("input.txt");
    // input data
    bitset<MAX_NUM+1> numsInS;
    numsInS.reset();
    int n = -1;
    cin >> n;
    for (int i = 0; i < n ; i++){
        int s = -1;
        cin >> s;
        numsInS[s] = 1;
    }