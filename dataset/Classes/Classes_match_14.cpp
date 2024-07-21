class Line{
	public:
	double a,b,c;//ax+by=c
	Line(Point s,Point t){
		//x=(x1+x2)/2 , y=(y1+y2)/2????????????
		//??????a=-(x1-x2)/(y1-y2)?????´???
		//(y1-y2)(y-(y1+y2)/2) = -(x1-x2)(x-(x1+x2)/2)
		//(x1-x2)x + (y1-y2)y = (x1^2-x2^2)/2 + (y1^2-y2^2)/2
		a=s.x-t.x;	b=s.y-t.y;
		c=((s.x+t.x)*(s.x-t.x)+(s.y+t.y)*(s.y-t.y))/2.0;
	}