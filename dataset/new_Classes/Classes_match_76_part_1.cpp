class Position {
  private:
    double x;
    double y;
    double angle;
    double radian;
  public:
    Position();
    void Rotate(double);
    void Move(double);
    double GetX();
    double Get