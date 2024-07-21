class Geom{
	public:
	double Length(point x,point y){
		point z=y-x;
		return z.x*z.x+z.y*z.y;
	}                                                                                                       