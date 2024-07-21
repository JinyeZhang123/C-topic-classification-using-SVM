bool operator<(const Team &t) {
		int cntAC1 = count(AC.begin(), AC.end(), 1);
		int cntAC2 = count(t.AC.begin(), t.AC.end(), 1);
		if (cntAC1 == cntAC2) {
			int t1 = time, t2 = t.time;
			rep(i, 0, AC.size())
				if (AC[i]) t1 += WA[i] * 20;
			rep(i, 0, t.AC.size())
				if (t.AC[i]) t2 += t.WA[i] * 20;
			if (t1 == t2)return id < t.id;
			else return t1 > t2;
		}