class Smallest_Enclosing_Disk{
	const static int INF = (1<<30);
	priority_queue< pair<int,int> > pq;
	vector<xy> v;

	typedef struct{
		double r;
		xy O;
	}                                            