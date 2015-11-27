/*!
*	/file
*	/brief  �������������� ��������� �������� ������� ���������
*
*	/author  ������� ����� <popoff96@live.com>
*	/date	 27.11.2015
*	/version 0.1
*
*	�������� �������, ����������� � ���������, ����������� ��� ���������
*   ���� ����������� ������ ��� ������������� ������� � ���� � ������� 
*   �������.
*/

#ifndef _BL_PLATFORM_
#define _BL_PLATFORM_

#define BL_TARGET_SYSTEM_WIN

#ifdef BL_TARGET_SYSTEM_WIN
#include "BWindows.h"
#endif
#ifdef BL_TARGET_SYSTEM_MAC
#include "BMacintosh.h"
#endif
#ifdef BL_TARGET_SYSTEM_LINUX
#include "BLinux.h"
#endif

#endif