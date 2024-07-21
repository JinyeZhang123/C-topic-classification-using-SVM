DecomposableSearchingProblem operator+(const DecomposableSearchingProblem &p)
    {
      return (DecomposableSearchingProblem(structure + p.structure, length + p.length));
    }