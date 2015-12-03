/*!
*	\file
*	\brief   ����� ���� � ��������������� �������
*	\author  ������� ����� <popoff96@live.com>
*	\date	 3.12.2015
*	\version 0.1
*
*	�������� �����, ��������������� ��������� ���� � ���������������
*	������ � �������� ������ � ������ Windows OS
*/

#ifndef _BL_WINDOW_
#define _BL_WINDOW_

#include "BPlatform.h"
#include "BType.h"
/*!
*	\brief	 ������������� ���� Windows
*	\authors  ������� ����� <popoff96@live.com>
*	\date	 2.12.2015
*	\version 0.1
*
*	������������ ����� ����� ���� Windows, ���������� ������ �� ����,
*   ����� ���: ������, �������, ��� � �.�., � ��� �� ������� ������ �
*   �����.
*/
class BWindow
{
private:
	///�������, �������������� ��������� ������� ����
	LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

public:
//@������������
	///����������� ����
	/*!
	*	\param [in] hInstance ��������� �� ������� ��������� ����
	*	\param [in] nCmdShow  ������ ����������� ����
	*
	*	������� ��������� ����. ��������� ������������ ����� ������ �
	*   ��������� ��������� ����������� ������� WinMain
	*/
	BWindow(HINSTANCE hInstance, int nCmdShow);
	~BWindow();

//@������

private:
	HWND _windowDesc;		///���������� ����
	HINSTANCE _hInstance;	///��������� �� ������� ���������
	int _nCmdShow;			///������ ����������� ����
	MSG _msg;

	BPoint2D<float> _pos;	///������� ������ �������� ���� ����
	BSize2D<int> _size;		///������� ���� 
};

#endif