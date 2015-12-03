/*!
*	\file
*	\brief  Инициализирует начальные средства целевой платформы
*
*	\authors  Георгий Попов <popoff96@live.com>
*	\date	 27.11.2015
*	\version 0.1
*
*	Содержит макросы, определения и включения, необходимые для включения
*   всех необходимых файлов для инициализации графики и окон в целевой 
*   системе.
*/

#ifndef _BL_PLATFORM_
#define _BL_PLATFORM_

#define BL_TARGET_SYSTEM_WIN	//Компилируем под виндовс (единственный вариант:( )

#ifdef BL_TARGET_SYSTEM_WIN
#include "BWindows.h"

#define main() CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)

#endif
#ifdef BL_TARGET_SYSTEM_MAC
#include "BMacintosh.h"
#endif
#ifdef BL_TARGET_SYSTEM_LINUX
#include "BLinux.h"
#endif

#endif
