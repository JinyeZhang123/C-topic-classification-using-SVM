template<typename T, typename U>
class LazyPropagationSegmentTreeNoGetRange {
 private:
  function<U(U, U)> op_merge;
  U empty_op;
  function<T(T, U)> apply_op;
  int num_nodes;
  vector<T> values;
  vector<U> op_nodes;

  void DoLazyPropagation(int node_index) {
   if (op_nodes[node_index] != empty_op) {
      if (node_index < num_nodes / 2) {
        op_nodes[2 * node_index] =
            op_merge(op_nodes[2 * node_index], op_nodes[node_index]);
        op_nodes[2 * node_index + 1] =
            op_merge(op_nodes[2 * node_index + 1], op_nodes[node_index]);
      }