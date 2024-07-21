class THuman
{
public:
	void Move(int Distance);
	void Turn(int Degree);
	double GetIntegerPartX();
	double GetIntegerPartY();
	THuman();
private:
	double FX;
	double FY;
	int FDegree;
}