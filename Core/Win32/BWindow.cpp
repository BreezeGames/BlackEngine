#include "BWindow.h"

BWindow::BWindow(HINSTANCE hInstance, int nCmdShow)
	:_pos(BPoint2D<float>()), _size(BPoint2D<int>(800, 600))
{
	WNDCLASSEX wndClass;

}

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg,
	WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_PAINT:
			break;
	case WM_DESTROY:
		PostQuitMessage(NULL);
		break;
	default:
		return DefWindowProc(hWnd, uMsg, wParam, lParam);
		break;
	}
}