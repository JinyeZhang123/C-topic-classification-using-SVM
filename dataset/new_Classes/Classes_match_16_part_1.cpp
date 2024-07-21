class Triangle{
public:
	P p1,p2,p3;

	//e1:p2-p3間の辺
	double e1,e2,e3;

	//a1:e1の向かいの角
	double a1,a2,a3;

	//cosine formula
	//長さaの辺の向かいの角の角度
	double cf(double a,double b,double c){
		return acos((b*b