#ifndef _BL_POINT2D_
#define _BL_POINT2D_

template<typename T> 
class BPoint2D
{
public:
//@������������

	///����������� �� ���������
	BPoint2D() :_x(), _y() {}

	///�������� �����������
	/*!
	*	\param [in] x - ������ ����������
	*   \param [in] y - ������ ����������
	*
	*	������� ��������� ����� � ������ ��������� ���������.
	*/
	BPoint2D(T x, T y) :_x(x), _y(y) {}

	///�������������� �����������
	/*!
	*	\param [in] val - �������� ���������
	*
	*	������� ����� � ������������ ������� val
	*/
	BPoint2D(T val) :_x(val), _y(val) {}

	///����������
	~BPoint2D();

//@������
	const T x() const {return _x}	///���������� x-����������
	const T y() const {return _y}	///���������� y-����������
private:
	T _x, _y;	///���������� ����� ���������� ������������
};
#endif