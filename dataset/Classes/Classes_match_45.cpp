class Triangle {

public:
	double Cross_Product_AB_AP, Cross_Product_BC_BP, Cross_Product_CA_CP;
	double Vec_ABx, Vec_BCx, Vec_CAx, Vec_APx, Vec_BPx, Vec_CPx;
	double Vec_ABy, Vec_BCy, Vec_CAy, Vec_APy, Vec_BPy, Vec_CPy;


	Triangle(double x1, double y1, double x2, double y2, double x3, double y3, double xp, double yp);

	bool IsInTriangle();
}