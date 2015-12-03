/*!
*	\file
*	\brief   Класс окна и вспомогательные функции
*	\author  Георгий Попов <popoff96@live.com>
*	\date	 3.12.2015
*	\version 0.1
*
*	Содержит класс, инкапсулирующий структуру окна и предоставляющий
*	доступ к функциям работы с окнами Windows OS
*/

#ifndef _BL_WINDOW_
#define _BL_WINDOW_

#include "BPlatform.h"
#include "BType.h"
/*!
*	\brief	 Представление окна Windows
*	\authors  Георгий Попов <popoff96@live.com>
*	\date	 2.12.2015
*	\version 0.1
*
*	Представляет собой класс окна Windows, содержащий данные об окне,
*   такие как: размер, позиция, тип и т.д., а так же функции работы с
*   окном.
*/
class BWindow
{
private:
	///Функция, обрабатывающая сообщения системы окну
	LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

public:
//@Конструкторы
	///Конструктор окна
	/*!
	*	\param [in] hInstance Указатель на текущий экземпляр окна
	*	\param [in] nCmdShow  Способ отображения окна
	*
	*	Создает экземпляр окна. Аргументы представляют собой первый и
	*   последний аргументы стандартной функции WinMain
	*/
	BWindow(HINSTANCE hInstance, int nCmdShow);
	~BWindow();

//@Методы

private:
	HWND _windowDesc;		///Дескриптор окна
	HINSTANCE _hInstance;	///Указатель на текущее состояние
	int _nCmdShow;			///Способ отображения окна
	MSG _msg;

	BPoint2D<float> _pos;	///Позиция левого верхнего угла окна
	BSize2D<int> _size;		///Размеры окна 
};

#endif