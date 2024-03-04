#include "stdheaders.h"
#include "Engine.h"
#include "DXSetup.h"

using namespace std;

// the entry point for any Windows program
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) 
{   
    DXSetup dx(1024, 768, "Game");
    return Engine::Run(&dx, hInstance, nCmdShow);
}

