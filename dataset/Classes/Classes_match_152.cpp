class Triangle{

private:
	//Op`ÌR_ÌÀW
	P a, b, c;
	//Op`ÌRÓÌ·³
	double A, B, C;
	//Op`ÌÊÏ
	double s;

public:
	//RXgN^(RÂÌ_ÆÓÆpxðú»)
	Triangle(P p1, P p2, P p3){
		a = p1;
		b = p2;
		c = p3;
		B = abs( c-a );
		A = abs( b-c );
		C = abs( a-b );
		double z = ( A + B + C ) / 2.0;
		s = sqrt( z * (z-A)*(z-B)*(z-C));
	}