template<typename T, typename U>
class LazyPropagationSegmentTree {
 private:
  function<T(T, T)> merge;
  T empty_value;
  function<U(U, U)> op_merge;
  U empty_op;
  function<T(T, U)> apply_op;
  int num_nodes;  
  vector<T> nodes;
  vector<U> op_nodes;

  void DoLazyPropagation(int node_index) {
   if (op_nodes[node_index] != empty_op) {
      nodes[node_index] = apply_op(nodes[node_index], op_nodes[node_index]);
      if (node_index < num_nodes / 2) {
        op_nodes[2 * node_index] =
            op_merge(op_nodes[2 * node_index], op_nodes[node_index]);
        op_nodes[2 * node_index + 1] =
            op_merge(op_nodes[2 * node_index + 1], op_nodes[node_index]);
      }