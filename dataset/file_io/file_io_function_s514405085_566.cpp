int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	VECTOR A, B, C, P;
	A.z = B.z = C.z = P.z = 0;
	std::vector<std::string> ans;

	while (std::cin >> A.x) {

		std::cin >> A.y >> B.x >> B.y >> C.x >> C.y >> P.x >> P.y;
		
		VECTOR AB = RelativePositionVector(A, B);
		VECTOR AP = RelativePositionVector(A, P);
		VECTOR BC = RelativePositionVector(B, C);
		VECTOR BP = RelativePositionVector(B, P);
		VECTOR CA = RelativePositionVector(C, A);
		VECTOR CP = RelativePositionVector(C, P);

		VECTOR ABxAP = CrossProduct(AB, AP);
		VECTOR BCxBP = CrossProduct(BC, BP);
		VECTOR CAxCP = CrossProduct(CA, CP);

		if (ABxAP.z > 0 && BCxBP.z > 0 && CAxCP.z > 0) {
			ans.push_back("YES");
		}