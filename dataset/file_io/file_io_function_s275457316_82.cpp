int main() {

	//ifstream cin("INPUT.txt");
	//ofstream cout("OUTPUT.txt");

	int day, koku, suu, kokud, suud;
	cin >> day >> koku >> suu >> kokud >> suud;
	cout << day - max(koku % kokud == 0 ? koku / kokud : koku / kokud + 1, koku % kokud == 0 ? suu / suud : suu / suud + 1) << endl;

	return 0;

}