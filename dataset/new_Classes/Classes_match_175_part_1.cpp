class Baseball{
private:
	int score,out,runner,inning;
public:
    Baseball();
    ~Baseball()=default;
    void checkEvent(std::string event);
    void hit();
    void homerun();
    void countOut();