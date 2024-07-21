int main(int argc, char* argv[])
{
	OPENOJIO;

	int h, w;
	short robot[MAXSIZE][MAXSIZE];
	static short dp[MAXSIZE][MAXSIZE][MAXSIZE][MAXSIZE];
	static short row_sum[MAXSIZE][MAXSIZE + 1];
	static short col_sum[MAXSIZE][MAXSIZE + 1];

#if OJ_MYPC
	ofstream ofs("text.txt");
	static char route[MAXSIZE][MAXSIZE][MAXSIZE][MAXSIZE];
#endif

	ip >> h >> w;
	char c;
	int ie, je;
	for(int i = 0;i < h; ++i)
		for (int j = 0; j < w; ++j)
		{
			ip >> c;
			if (c == 'E') { ie = i; je = j; }