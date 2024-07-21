template <class Edge>
class Net {
	private:
		vector<list<Edge> > outerEdges;
		vector<list<Edge> > innerEdges;

		// ХОЧЕТСЯ iter.begin(), iter.end(), iter ++, iter --, =, ==, (bool)
		class UniversalEdgeIterator {
			friend class Net;

			private:
				bool undefined = true;
				list<Edge> *edgeList;
				typename list<Edge>::iterator iter;
	
				void set (list<Edge> *edgeList) {
					this->edgeList = edgeList;
				}