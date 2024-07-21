class baseball{
    private:
    int runner; //number of runner
    int score; //score
    int out_count; //counter of out
    int third_base; //runner is or not
  
    public:
    void initial();
    int getScore();
    int getOutCount();
    void singleHit_1();
    void singleHit_2();
    void homerun();
    void out();
    
}