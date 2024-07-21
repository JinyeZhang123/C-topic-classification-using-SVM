t_t operator-(t_t t1,t_t t2) {
	t_t dt; // delta time
	int b = 0; // borrow
	dt.s = t1.s - t2.s;
	if (dt.s < 0) {
		dt.s += 60;
		b = 1;
	}