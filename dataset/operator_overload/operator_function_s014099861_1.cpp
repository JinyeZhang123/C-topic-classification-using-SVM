bool operator==(const Team& r)
	{
		if ( this->_solveNum == r._solveNum && this->_time == r._time ){
//			this->dump();
//			r.dump();
			return true;
		}