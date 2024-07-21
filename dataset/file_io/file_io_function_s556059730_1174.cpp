int main() {
#ifdef HOME
    ifstream cin("A.in");
    ofstream cout("A.out");
#endif
    int i, n;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
   	
    cin >> n;

    Trie* root = new Trie();

    for(i = 0; i < n; i++) {
    	string str;
    	cin >> str;
    	reverse(str.begin(), str.end());
    	add(root, str, 0);
    }