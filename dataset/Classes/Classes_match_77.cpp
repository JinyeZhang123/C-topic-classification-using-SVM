class THuman
{
public:
	void Move(int Distance);
	void Turn(int Degree);
	int GetIntegerPartX();
	int GetIntegerPartY();
	THuman();
private:
	double FX;
	double FY;
	int FDegree;
}