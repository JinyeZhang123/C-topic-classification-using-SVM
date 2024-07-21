template<int NN> class BipartiteMatch
{
	public:
	BipartiteMatch()
	{
		memset(matchedTo, -1, sizeof(matchedTo));
	}