template <typename Container>
static Node<typename Container::const_iterator> makeNode(Container& container) {
  return {container.begin(), container.end()}