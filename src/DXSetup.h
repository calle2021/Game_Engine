#pragma once
#include "stdheaders.h"

class DXSetup {
    public:
        DXSetup(UINT width, UINT height, LPCSTR title);
        ~DXSetup();
        void init();
        void update();
        void render();
        void destroy();
        const LPCSTR get_title() const { return m_title; }
    private:
        static const UINT frame_count = 2;
        UINT m_width;
        UINT m_height;
        LPCSTR m_title;

        void LoadPipeline();
        void LoadAssets();
};

