bool operator<(const Pr &r) {
		return (eq(r) ? (name < r.name) : (eff > r.eff));
	}