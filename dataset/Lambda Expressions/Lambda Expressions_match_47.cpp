[](char c)->char{
			if (islower(c)) return (c - 'a' + 1) % 26 + 'a';
			else 			return c;
		}