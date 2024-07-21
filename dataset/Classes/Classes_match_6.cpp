class Nums
{
private:
	int a,b;//a>=b
	int gcd;
	int lcm;
	
	void calc_gcd();
	void calc_lcm();
public:
	Nums(int,int);
	void echo_gcd();
	void echo_lcm();
}