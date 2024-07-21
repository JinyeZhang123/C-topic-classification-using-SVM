M operator+(M &other){
	  M res(left, other.get_r(), cnt + other.get_c() + left * right * other.get_r());
    return res;
  }