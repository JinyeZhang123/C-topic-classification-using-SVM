int main() {
    //ifstream cin("input.in");
    string s, t;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A' || s[i] == 'C') {
            t.push_back(s[i]);
        }