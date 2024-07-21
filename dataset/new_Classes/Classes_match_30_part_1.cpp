class Triangle{
private:	
	point a,b,c;
	double edgeA,edgeB,edgeC;
	double angleA,angleB,angleC;
	double calc_angle(double a,double b, double c){
		return acos((b*b+c*c-a*a)/(2.0*b*c));
	}            