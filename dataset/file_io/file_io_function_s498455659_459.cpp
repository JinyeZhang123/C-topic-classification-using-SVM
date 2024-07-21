int main() {
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	//ofstream cout ("fileName.txt");
	//ifstream cin ("fileName.txt");
	
	int X, Y;
	cin >> X >> Y;
 	
	int numerator = 4*X-Y;
	
	if(numerator>=0 && numerator%2==0 && numerator/2<=X) cout << "Yes\n";
	else cout << "No\n";
 	
	return 0;
}