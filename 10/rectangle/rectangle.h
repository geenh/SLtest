class Rect
{
public:
	void SetValue(double width, double height)
	{
		m_width = width;
		m_height = height;

	}
	double GetWidth()
	{
		return m_width;
	}
	double GetHeight()
	{
		return m_height;
	}
	double GetArea()
	{
		return m_width * m_height;
	}
	

private:
	double m_width;
	double m_height;



};
