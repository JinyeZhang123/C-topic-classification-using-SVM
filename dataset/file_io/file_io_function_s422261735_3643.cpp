int main() {

#ifdef DEB2
    cout << "DEBUG MODE"  << endl;
	ifstream in("input.txt"); //for debug
	cin.rdbuf(in.rdbuf()); //for debug
#endif

	int T=1; 

	for (int i = 0; i < T; ++i) {
		solve();
	}