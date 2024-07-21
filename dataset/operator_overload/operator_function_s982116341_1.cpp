bool operator!=(const EdgeIterator &edge_it)
        {
            asl_assert(graph == edge_it.graph);
            return edge_ix != edge_it.edge_ix;
        }