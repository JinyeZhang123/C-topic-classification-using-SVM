class Vector3{
public:
	double x,y;

	double operator*( Vector3 hoge ){
		return x * hoge.y - y * hoge.x;
	}                                                                                            