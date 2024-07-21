class THuman
{
public:
	void Move(int Distance);
	void Turn(int Degree);
	double GetX();
	double GetY();
	THuman();
private:
	double FX;
	double FY;
	int FDegree;
}