class Baseball{
private:
    int m_first = 0;
    int m_second = 0;
    int m_third = 0;
    int m_out = 0;
    int m_point = 0;

public:
    void isHit(){
        if(m_third == 1){
            m_thir