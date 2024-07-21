class Plane{
private:
	vector< vector< int > > m_plane;
	int m_nx, m_ny;
	int m_initiation_range;
	stringstream m_ss_buf;
public:
	Plane(int nx, int ny, int init_range);//Constructor
	~Plane();//Destr