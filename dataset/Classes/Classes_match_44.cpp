class Pos {
public:
	const static int ABOVE = 1;
	const static int BELOW = 0;
	float x, y;
	int getWhichSide(Pos a, Pos b) {
		if (a.x == b.x) {
			return (x > a.x) ? ABOVE : BELOW;
		}