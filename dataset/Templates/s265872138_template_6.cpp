template <class data_t>
int dice<data_t>::comp_dice_spin(dice<data_t> d2){
	int i;
	for(i=0;i<4;i++){
		if(comp_dice(d2) == 0)
			return 0;
		levorotation_spin();
	}