bool operator<(const Edge &e1, const Edge &e2)
{
	return e1.weight != e2.weight ? e1.weight > e2.weight : // !!INVERSE!!
			   e1.id_src != e2.id_src ? e1.id_src < e2.id_src : e1.id_dst < e2.id_dst;
}