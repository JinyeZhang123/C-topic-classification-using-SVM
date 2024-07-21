bool operator<( const Edge& other )
		{ return this->cost != other.cost ?
			this->cost < other.cost : this->to < other.to;  }