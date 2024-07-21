template <class Data, class Operator>
class CoSegmentTree {
    using OperatorMerger = std::function<Operator(Operator, Operator)>;
    using Applier = std::function<Data(Data, Operator)>;

public:
    int length;
    std::vector<Operator> ope;
    Data dat_id;
    Operator ope_id;
    OperatorMerger opem;
    Applier app;

    explicit CoSegmentTree(int N, Data dat_id, Operator ope_id, OperatorMerger opem, Applier app)
        : length(1), dat_id(dat_id), ope_id(ope_id), opem(opem), app(app) {
        while (length < N) length *= 2;
        ope.assign(length * 2, ope_id);
    }