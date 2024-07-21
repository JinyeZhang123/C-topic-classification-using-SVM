class Triangle{

private:
	//Op`ÌR_ÌÀW
	P a, b, c;
	//Op`ÌRÓÌ·³
	double edgeA,edgeB,edgeC;
	//Op`ÌRpÌå«³(WA)
	double angleA,angleB,angleC;
	//]·è©çRÂÌpxðßéÖ
	double LawOfCosines(double a,double b, double c){
		return acos( (b*b+c*c-a*a) / (2.0*b*c) );
	}