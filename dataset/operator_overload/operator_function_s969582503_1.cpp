bool operator==(Dice a){
		for(int i=0;i<6;i++){
			if(x[i]!=a.x[i])	return false;
		}