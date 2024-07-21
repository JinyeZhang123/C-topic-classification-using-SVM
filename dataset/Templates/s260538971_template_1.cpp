template <class Edge>
class Net {
	private:
		typedef Edge* EdgePointer;
		vector<EdgePointer> edges;
		vector<list<EdgePointer> > outerEdges;
		vector<list<EdgePointer> > innerEdges;

		// ХОЧЕТСЯ iter.begin(), iter.end(), iter ++, iter --, =, ==, (bool)
		class UniversalEdgeIterator {
			friend class Net;

			private:
				bool undefined = true;
				list<Edge*> *edgeList;
				typename list<Edge*>::iterator iter;
	
				void set (list<Edge*> *edgeList) {
					this->edgeList = edgeList;
				}