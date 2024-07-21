template <class data_t>
void dice<data_t>::roll(char ch){
	data_t tmp;
	switch(ch){
		case 'E':
			tmp = field[0];
			field[0] = field[3];
			field[3] = field[5];
			field[5] = field[2];
			field[2] = tmp;
			break;
		case 'N':
			tmp = field[0];
			field[0] = field[1];
			field[1] = field[5];
			field[5] = field[4];
			field[4] = tmp;
			break;
		case 'S':
			tmp = field[0];
			field[0] = field[4];
			field[4] = field[5];
			field[5] = field[1];
			field[1] = tmp;
			break;
		case 'W':
			tmp = field[0];
			field[0] = field[2];
			field[2] = field[5];
			field[5] = field[3];
			field[3] = tmp;
			break;
	}