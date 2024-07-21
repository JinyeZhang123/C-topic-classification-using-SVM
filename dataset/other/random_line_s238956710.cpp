	void Update(int z) { for (int i=0;i<3;++i) Min[z][i]=min(Min[ls][i]+lazy[ls],Min[rs][i]+lazy[rs]); }
