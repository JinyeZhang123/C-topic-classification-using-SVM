bool operator==(Dice & obj) {
		for (int i = 0; i < 6; i++) {
			if (this->d[i] != obj.d[i]) { return false; }