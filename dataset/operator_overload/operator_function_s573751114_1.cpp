bool operator<(const NODE r){
		if(h * h + w * w != r.h * r.h + r.w * r.w) return h * h + w * w < r.h * r.h + r.w * r.w;
		return h < r.h;
	}