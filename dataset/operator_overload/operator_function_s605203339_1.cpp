bool operator<(const team& t1 , const team& t2){
	if(t1.ac != t2.ac) return t1.ac>t2.ac;
	if(t1.pe != t2.pe) return t1.pe<t2.pe;
	else		   return t1.id<t2.id;
}