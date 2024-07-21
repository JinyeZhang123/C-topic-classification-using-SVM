template<typename VM,typename OM>
class LazySegmentTree{
protected:
  int                 range_;
  VM              value_identity_;
  OM              operator_identity_;
  std::vector<VM> value_tree_;
  std::vector<OM> lazy_tree_;

  virtual VM MergeValue(const VM& a, const VM& b)=0;
  virtual OM MergeOperator(const OM& target,const OM& effector)=0;
  virtual VM Operate(const VM& val, const OM& opl)=0;
  virtual OM GetOperator(const OM& opl, const int n)=0;

  VM InternalMerge(const VM& a, const VM& b){
    if(a==value_identity_){
      return b;
    }