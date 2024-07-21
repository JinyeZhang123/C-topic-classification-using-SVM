class Lots
{
private:
	int *start_goal;
	int verLineNum;
public:
	Lots(const int lineCount);
	~Lots();
	
	void draw_line(const int from,const int to);
	void echo_goalNums();
}