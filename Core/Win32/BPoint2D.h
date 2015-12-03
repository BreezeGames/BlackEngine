#ifndef _BL_POINT2D_
#define _BL_POINT2D_

template<typename T> 
class BPoint2D
{
public:
//@Конструкторы

	///Конструктор по умолчанию
	BPoint2D() :_x(), _y() {}

	///Основной конструктор
	/*!
	*	\param [in] x - Первая координата
	*   \param [in] y - Вторая координата
	*
	*	Создает двумерную точку с полным указанием координат.
	*/
	BPoint2D(T x, T y) :_x(x), _y(y) {}

	///Дополнительный конструктор
	/*!
	*	\param [in] val - Значение координат
	*
	*	Создает точку с координатами равными val
	*/
	BPoint2D(T val) :_x(val), _y(val) {}

	///Деструктор
	~BPoint2D();

//@Методы
	const T x() const {return _x}	///Возвращает x-координату
	const T y() const {return _y}	///Возвращает y-координату
private:
	T _x, _y;	///Координаты точки двумерного пространства
};
#endif