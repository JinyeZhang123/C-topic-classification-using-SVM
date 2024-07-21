[&]() {
			string s; cin >> s;
			reverse(s.begin(), s.end());
			for(int i = 0; i < s.size(); i ++)
				a[i] += s[i] - '0';
		}