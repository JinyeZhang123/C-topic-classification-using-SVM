class Plane{
private:
	vector< vector< int > > m_plane;
	int m_nx, m_ny;
	int m_initiation_range;
	stringstream m_ss_buf;
public:
	Plane(int nx, int ny, int init_range);//Constructor
	~Plane();//Destructor
	//「平面の中で爆弾が置かれているマス」を設定
	//int LineNo : 行番号　0-based
	//string LineString : 行番号LineNoの情報(8文字の0と1の文字列)
	void setInitialPosition(int LineNo, string &LineString);
	//初期起爆位置を入力し、起爆させる
	void Initiate(int initiation_x, int initiation_y);
	void DebugPrint();
}