#pragma once
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <shellapi.h>

#include <windef.h>
#include <windowsx.h>

#include <wrl.h>
#include <wrl/client.h>
#include <algorithm>
#include <cassert>
#include <chrono>
#include <vector>
#include <fstream>

struct WINDOW_DESC {
	HINSTANCE hInstance;
	PCWSTR lpWindowName;
	int nCmdShow;
	int nWidth, nHeight;
	DWORD dwStyle;
	DWORD dwExStyle;
	PCWSTR lpClassName;
	int xCoord, yCoord;
	HWND hWndParent;
	HMENU hMenu;

	WINDOW_DESC(
		HINSTANCE _hInstance,
		PCWSTR _lpWindowName,
		int _nCmdShow = 5,
		int _nWidth = 1280,
		int _nHeight = 720,
		DWORD _dwStyle = WS_OVERLAPPEDWINDOW,
		DWORD _dwExStyle = 0,
		PCWSTR _lpClassName = L"SlingshotWindow",
		int _xCoord = CW_USEDEFAULT,
		int _yCoord = CW_USEDEFAULT,
		HWND _hWndParent = 0,
		HMENU _hMenu = 0) :
		hInstance(_hInstance),
		lpWindowName(_lpWindowName),
		nCmdShow(_nCmdShow),
		nWidth(_nWidth), nHeight(_nHeight),
		dwStyle(_dwStyle),
		dwExStyle(_dwExStyle),
		lpClassName(_lpClassName),
		xCoord(_xCoord), yCoord(_yCoord),
		hWndParent(_hWndParent),
		hMenu(_hMenu) {}
};

class Window
{
public:
	static Window* Create(WINDOW_DESC* window_desc);
	HWND GetHandle();
	void Shutdown();
private:
	Window(WINDOW_DESC* window_desc);
	HWND m_hWnd;
	WINDOW_DESC* m_pDesc;
};

