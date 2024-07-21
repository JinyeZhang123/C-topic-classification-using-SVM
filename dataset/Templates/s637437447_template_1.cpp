template <typename T> class SegmentTree{
	public :
		int n;
		SegmentTree(int size,T o): out_of_range(o){
			for(n=1;n<size;n<<=1);
			data=vector<T>(2*n,out_of_range);
			lazy=vector<bool>(2*n,false);
		}