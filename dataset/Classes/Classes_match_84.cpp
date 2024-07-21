class LineSegment
{
private:
	Point m_Start;
	Point m_End;
public:
	LineSegment(Point start, Point end)
		: m_Start( start )
		, m_End( end )
	{}