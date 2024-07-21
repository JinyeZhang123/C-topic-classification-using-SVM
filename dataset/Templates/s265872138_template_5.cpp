template <class data_t>
int dice<data_t>::comp_dice_type(dice<data_t> d2){
	if(comp_dice_spin(d2) == 0)return 0;
	roll('N');
	if(comp_dice_spin(d2) == 0)return 0;
	roll('E');
	if(comp_dice_spin(d2) == 0)return 0;
	roll('E');
	if(comp_dice_spin(d2) == 0)return 0;
	roll('E');
	if(comp_dice_spin(d2) == 0)return 0;
	roll('N');
	if(comp_dice_spin(d2) == 0)return 0;
	return -1;
}