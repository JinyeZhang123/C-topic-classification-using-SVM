[&]() {
			bool r = 0;
			for(int i = 1; i <= 10; i ++) {
				bool t = 1;
				for(int j = i; j < i + 5; j ++)
					if(!c[(j - 1) % 13 + 1])
						t = 0;
				r |= t;
			}