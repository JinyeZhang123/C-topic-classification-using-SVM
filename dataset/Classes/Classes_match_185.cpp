class Baseball{
private:
	int point;
	int out_count;
	int runner;
public:
	Baseball();
	void singleHit();
	void homerun();
	void out();
	void new_inning();
	int get_out_count();
	int get_point();
	~Baseball() = default;
}