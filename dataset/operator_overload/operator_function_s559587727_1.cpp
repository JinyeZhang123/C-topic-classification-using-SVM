bool operator==(Dice b) {
		rep(k, 2) {
			rep(i, 4) {
				rep(j, 4) {
					if (b.d[b.U] == d[U] && b.d[b.S] == d[S] && b.d[b.E] == d[E] &&
						b.d[5 - b.U] == d[5 - U] && b.d[5 - b.S] == d[5 - S] && b.d[5 - b.E] == d[5 - E])
						return true;
					rotate('E');
				}