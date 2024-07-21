class Baseball{
public:
    Baseball();
    void init();
    int getPoint();
    void hit();
    void homerun();
    // @return false - the inning ends.
    bool out();
    
private:
    int point;
  