#include "Engine.h"

HWND Engine::m_hwnd = nullptr;

int Engine::Run(DXSetup* dx, HINSTANCE hInstance, int nCmdShow)
{

    LPCSTR class_name = "Winodw_Class";
    LPCSTR window_title = "My_Window";

    // Initialize the window class.
    WNDCLASSEX wc = { 0 };
    wc.cbSize = sizeof(WNDCLASSEX);
    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.lpszClassName = class_name;
    RegisterClassEx(&wc);

    // Create the window and store a handle to it.
    m_hwnd = CreateWindowEx(WS_EX_OVERLAPPEDWINDOW,
                            wc.lpszClassName,    // name of the window class
                            dx->get_title(),   // title of the window
                            WS_OVERLAPPEDWINDOW,    // window style
                            CW_USEDEFAULT,    // x-position of the window
                            CW_USEDEFAULT,    // y-position of the window
                            1024,    // width of the window
                            768,    // height of the window
                            NULL,    // we have no parent window, NULL
                            NULL,    // we aren't using menus, NULL
                            hInstance,    // application handle
                            NULL);    // used with multiple windows, NULL

    ShowWindow(m_hwnd, nCmdShow);
    
    MSG msg = {};
    while (msg.message != WM_QUIT) 
    {
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) 
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
        // Run game code here
        // ...
        // ...
    }
    return static_cast<char>(msg.wParam);
}

// this is the main message handler for the program
LRESULT CALLBACK Engine::WindowProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    // sort through and find what code to run for the message given
    switch(message)
    {
        // this message is read when the window is closed
        case WM_DESTROY:
            {
                // close the application entirely
                PostQuitMessage(0);
                return 0;
            } break;
    }

    // Handle any messages the switch statement didn't
    return DefWindowProc (hwnd, message, wParam, lParam);
}

