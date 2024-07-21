class point{ // as necessary
	public:
		static const int COUNTER_CLOCKWISE=1;
		static const int CLOCKWISE=-1;
		static const int ONLINE_BACK=2;
		static const int ONLINE_FRONT=-2;
		static const int ON_SEGMENT=0;
		static const double EPS=1e-10;
		double x;
		double y;
		point(double x=0,double y=0):x(x),y(y){}