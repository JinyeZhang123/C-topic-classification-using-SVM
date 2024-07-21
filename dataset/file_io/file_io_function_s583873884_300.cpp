int main() {
    //ifstream cin("A.in");
    //ofstream cout("A.out");
    int i, j;
    ios::sync_with_stdio(false);
    cin >> str;
    int n = str.size();
    str = " " + str;
    for(i = 1; i <= n; i++) {
       for(j = 0; j < 26; j++)
          sp[i][j] = sp[i - 1][j];
       sp[i][str[i] - 'a']++;
       sp[i][str[i] - 'a'] %= 2;
    }