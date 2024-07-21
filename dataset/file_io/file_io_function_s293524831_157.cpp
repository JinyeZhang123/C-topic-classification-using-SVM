int main() {
    //ifstream cin("A.in");
    //ofstream cout("A.out");
    int i, n;
    ios::sync_with_stdio(false);
    cin >> str;
    n = str.size();
    str = " " + str;
    int k = 0;
    for(i = 2; i <= n; i++) {
        while(k > 0 && str[k + 1] != str[i])
            k = pi1[k];
        if(str[k + 1] == str[i])
            k++;
        pi1[i] = k;
    }