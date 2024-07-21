template <typename T, typename C>
auto postOrder(T& result, const Node<C>* node) {
  if (!node)
    return;
  postOrder(result, node->left());
  postOrder(result, node->right());
  result.push_back(node->root());
}