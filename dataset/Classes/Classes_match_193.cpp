class Baseball{
	private:
	int out;
	int runner;
	int point;

	public:
	void init();
	int get_out();
	int get_point();
	void event_hit();
	void event_homerun();
	void event_out();
}