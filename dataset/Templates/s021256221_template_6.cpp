template<typename T> class Fenwick2D{
	public:
		int H,W;vector<Fenwick<T> > fs;
		Fenwick2D():Fenwick2D(0,0){}