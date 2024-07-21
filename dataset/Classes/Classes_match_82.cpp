class capitalize {
public:
    capitalize();
    bool Run();

private:
    
    bool Input();
    bool Convert();
    void Show() const;

private:
    std::string m_lower;    // Lower case
    std::string m_upper;    // Upper case
}