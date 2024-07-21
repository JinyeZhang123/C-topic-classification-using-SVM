int main() {

	//ifstream cin("INPUT.txt");
	//ofstream cout("OUTPUT.txt");

	int W, H, N, x, y, xi, yi, distx, disty, sum, i;
	cin >> W >> H >> N;
	cin >> x >> y;
	sum = 0;
	for(i = 1; i < N; i++) {
		cin >> xi >> yi;
		distx = x - xi;
		disty = y - yi;
		if(distx >= 0 && disty >= 0) {
			sum += max( abs(distx), abs(disty) );
		}