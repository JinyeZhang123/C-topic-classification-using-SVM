class Baseball{
private:
    int m_runner = 0;
    int m_out = 0;
    int m_point = 0;

public:
    void isHit(){
        if(m_runner < 3){
            ++m_runner;
            //if fill all base    
 