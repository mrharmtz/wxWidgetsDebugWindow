#ifndef _DEBUG_WINDOW_HPP_
#define _DEBUG_WINDOW_HPP_

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include <wx/grid.h>

class DebugWindow:public wxFrame{

    public:
        DebugWindow();
        virtual ~DebugWindow();

    private:
        wxTextCtrl *m_textbox;
        std::streambuf *m_sbOld;
};

#endif //_DEBUG_WINDOW_HPP_