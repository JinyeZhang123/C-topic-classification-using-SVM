class Baseball{
	private:
	int out_count;
	std::array<int, 4> runner; 	//first second third home
								//runner:1 no:0 home:point
	
	public:
	Baseball(){
		out_count = 0;
		for(int i=0; i<4; ++i)
			runner[i] = 0;
	}