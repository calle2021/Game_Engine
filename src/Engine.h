#pragma once
#include "stdheaders.h"
#include "DXSetup.h"

class DXSetup;

class Engine 
{
    public:
        static int Run(DXSetup* dx, HINSTANCE hInstance, int nCmdShow);
        static HWND get_hwnd() { return m_hwnd; }
    
    protected:
        static LRESULT CALLBACK WindowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
    
    private:
        static HWND m_hwnd;

};