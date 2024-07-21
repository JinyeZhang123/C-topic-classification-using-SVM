class saleData
{
public:

	int hireNo;
	long saleValue = 0;

	void addSale(long value)
	{
		if(saleValue < 1000000)
		{
			saleValue += value;
		}                                                      