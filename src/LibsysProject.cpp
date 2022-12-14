//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("LibsysMainDlg.cpp", MainForm);
USEFORM("BookManagerDlg.cpp", BookManagerFrm);
USEFORM("Exceptionlog.cpp", ExceptionLogFrm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
    try
    {
        Application->Initialize();
        Application->MainFormOnTaskBar = true;
        TStyleManager::TrySetStyle("Iceberg Classico");
        Application->CreateForm(__classid(TMainForm), &MainForm);
        Application->CreateForm(__classid(TExceptionLogFrm), &ExceptionLogFrm);
        Application->Run();
    }
    catch (Exception &exception)
    {
        Application->ShowException(&exception);
    }
    catch (...)
    {
        try
        {
            throw Exception("");
        }
        catch (Exception &exception)
        {
            Application->ShowException(&exception);
        }
    }
    return 0;
}
//---------------------------------------------------------------------------
