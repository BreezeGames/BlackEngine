/*!
*	\file
*	\brief   ������� ������������ ����
*	\author  ������� ����� <popoff96@live.com>
*	\date	 27.11.2015
*	\version 0.1
*
*	�������� �������� ����� BAplication, ������� �������� ��� ������� ��������
*	���������������� ����������, ������� ����, ���� � ����������� ��������. ������ 
*   ����� ��������������� � ���������� �������� ������.
*/

#ifndef _BL_APPLICATION_
#define _BL_APPLICATION_

#include "BPlatform.h"	//���������� �������� ��������� ���������
#include "BWindow.h"

/*!
*	\brief	 ������� ����� ����������
*	\authors  ������� ����� <popoff96@live.com>
*	\date	 27.11.2015
*	\version 0.1
*
*	�������� ����� ����������, � ������� ��������� ��� ���������� ������, ����� ���
*   ������ � ����.
*/
class BApplication
{
public:
	///����������� �� ���������
	BApplication();
	///���������� ����������
	~BApplication();

private:
	BWindow _window;
};
#endif