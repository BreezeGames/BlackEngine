/*!
*	\file
*	\brief   Главный заголовочный файл
*	\author  Георгий Попов <popoff96@live.com>
*	\date	 27.11.2015
*	\version 0.1
*
*	Содержит основной класс BAplication, который содержит все базовые элементы
*	разрабатываемого приложения, включая цикл, окно и графические средства. Данный 
*   класс взаимодействует с остальными модулями движка.
*/

#ifndef _BL_APPLICATION_
#define _BL_APPLICATION_

#include "BPlatform.h"	//Подключаем средства выбранной платформы
#include "BWindow.h"

/*!
*	\brief	 Главный класс приложения
*	\authors  Георгий Попов <popoff96@live.com>
*	\date	 27.11.2015
*	\version 0.1
*
*	Основной класс приложения, в котором находятся все компоненты движка, такие как
*   рендер и окно.
*/
class BApplication
{
public:
	///Конструктор по умолчанию
	BApplication();
	///Деструктор приложения
	~BApplication();

private:
	BWindow _window;
};
#endif