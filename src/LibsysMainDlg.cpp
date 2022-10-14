//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "LibsysMainDlg.h"
#include "BookManagerDlg.h"
#include "ExceptionLog.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
    : TForm(Owner)
{
    //
}

void __fastcall TMainForm::BookItemClick(TObject *Sender)
{
    TBookManagerFrm *BookManagerFrm = new TBookManagerFrm(this);
    BookManagerFrm->ShowModal();

    delete BookManagerFrm;
    BookManagerFrm = NULL;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::ErrorStatusItemClick(TObject *Sender)
{
    TExceptionLogFrm *ExceptionLogFrm = new TExceptionLogFrm(this);
    ExceptionLogFrm->ShowModal();

    delete ExceptionLogFrm;
    ExceptionLogFrm = NULL;
}
//---------------------------------------------------------------------------

