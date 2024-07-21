template <typename X>
class Tree{
private:
  int n; // number of node
  vector<vector<Edge<X>>> edge; 
  vector<Node<X>> node;
  
  const int MAXLOGN = 20;
  
public:
  Tree() = default;

  Tree(int n) : n(n) {
    edge.resize(n);
  }