template <class data_t>
int dice<data_t>::comp_dice(dice<data_t> d2){
	int c;
	for(c=0;c<6;c++){
		if(field[c] != d2.field[c]){
			return field[c] - d2.field[c];
		}