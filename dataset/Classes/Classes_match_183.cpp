class baseball{
	private : 
	bool firstRunner; //first runnner flag
	bool secondRunner; //second runnner flag
	bool thirdRunner; //third runnner flag

	int score; //inning score
	int outCount; //number of out count 

	public :  
	baseball();

	void doHit();
	void doHomerun();
	void doOut();

	int getOutCount();
	void showScore();
}