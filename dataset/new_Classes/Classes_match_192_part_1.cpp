class Baseball{
private:
	//int event;
	int point_count;
	int out_count;
	int runner;

public:
	 Baseball(int p, int o, int r);
	 void singleHit();
	 void homerun();
	 void out();
	 void newInning();
