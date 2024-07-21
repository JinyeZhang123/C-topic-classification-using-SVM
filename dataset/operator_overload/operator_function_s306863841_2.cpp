t_num operator-(const t_num&obj){
		t_num t;
		t.m10=this->m10-obj.m10;
		t.m50=this->m50-obj.m50;
		t.m100=this->m100-obj.m100;
		t.m500=this->m500-obj.m500;
		return t;
	}