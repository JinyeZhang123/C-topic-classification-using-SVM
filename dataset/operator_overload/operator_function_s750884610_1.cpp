bool operator<(const Plant &other) {
		return (effective != other.effective ? effective > other.effective : name < other.name);
	}