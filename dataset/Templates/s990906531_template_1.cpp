template<int U=31> 
class MultiSet{
	unsigned int summary;
	MultiSet<U-5> *ch[1<<5];
	static int low_bits(unsigned int a){
		return a&((1<<U-5)-1);
	}