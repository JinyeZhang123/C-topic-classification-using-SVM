void localTest() {
	ifstream in("big_tests8.txt");
	int iteration = 0;
	in >> n;
	while (n) {

		
		//cout << iteration << "\n";


		in >> m;
		s = 0;
		t = n - 1;
		//cout << n << " " << m << endl;
		e.assign(2 * m, edge());
		next_.assign(2 * m, -1);
		head.assign(n, -1);

		int x, y, z;
		for (int i = 0, l = 0; i < m; ++i, l += 2) {
			in >> x >> y >> z;
			//cout << x << " " << y << " " << z << endl;

			e[l] = edge(x - 1, y - 1, 0, z);
			next_[l] = head[x - 1];
			head[x - 1] = l;

			e[l + 1] = edge(y - 1, x - 1, 0, 0);
			next_[l + 1] = head[y - 1];
			head[y - 1] = l + 1;
		}