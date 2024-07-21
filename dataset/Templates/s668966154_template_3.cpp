template <typename GraphType>
struct graph_traits {
  using value_type = typename GraphType::value_type;
  using vertex_type = typename value_type::value_type;
  using edge_type = typename vertex_type::value_type;
  using cost_type = typename edge_type::value_type;
  using path_type = vertex_type;
}