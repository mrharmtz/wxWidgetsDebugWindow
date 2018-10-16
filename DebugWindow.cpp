#include "DebugWindow.hpp"

DebugWindow::DebugWindow()
: wxFrame(NULL, wxID_ANY, "Debug Window"){
    m_textbox = new wxTextCtrl(this,-1,wxEmptyString,wxDefaultPosition,wxDefaultSize,wxTE_MULTILINE | wxTE_RICH2);

    m_textbox->SetEditable(false);
    m_textbox->SetBackgroundColour(wxColor("black"));
    m_textbox->SetForegroundColour(wxColor(0x88FF88));
    m_sbOld = std::cout.rdbuf();
    std::cout.rdbuf(m_textbox);

    SetSize(1000,600);
    Center();

    std::cout << "debug window ready... " << std::endl;
}

DebugWindow::~DebugWindow(){
    std::cout.rdbuf(m_sbOld);
}