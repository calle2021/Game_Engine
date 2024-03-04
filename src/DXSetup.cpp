#include "DXSetup.h"

DXSetup::DXSetup(UINT width, UINT height, LPCSTR title) :
    m_width(width),
    m_height(height),
    m_title(title)
{
}

DXSetup::~DXSetup()
{
}

void DXSetup::init()
{
    LoadPipeline();
    LoadAssets();
}

void DXSetup::update()
{
}

void DXSetup::render()
{
}

void DXSetup::destroy()
{
}

void DXSetup::LoadPipeline()
{
}

void DXSetup::LoadAssets()
{
}

