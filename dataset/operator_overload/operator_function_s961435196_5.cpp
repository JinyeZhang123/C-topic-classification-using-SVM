bool operator==(point p){
		return fabs(add_double(x,-p.x))<eps&&fabs(add_double(y,-p.y))<eps;
	}