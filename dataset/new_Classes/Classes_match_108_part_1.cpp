class Paper
{
private:
	int paper[10][10];
public:
	Paper()
	{
		for ( int i = 0; i < 10; i++ )
		{
			for ( int j = 0; j < 10; j++ )
			{
				paper[i][j] = 0;
			}                                    