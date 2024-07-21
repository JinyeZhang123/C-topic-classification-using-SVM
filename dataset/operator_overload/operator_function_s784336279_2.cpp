treasure operator+(treasure t){
		treasure tt;
		tt.v = this->v + t.v;
		tt.w = this->w + t.w;
		return tt;
	}