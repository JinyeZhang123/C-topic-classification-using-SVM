template <class data_t>
void spin(dice<data_t> &d){
	data_t tmp;
	tmp = d.field[1];
	d.field[1] = d.field[3];
	d.field[3] = d.field[4];
	d.field[4] = d.field[2];
	d.field[2] = tmp;
	return;
}