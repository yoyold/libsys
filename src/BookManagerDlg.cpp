//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BookManagerDlg.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBookManagerFrm *BookManagerFrm;
//---------------------------------------------------------------------------
__fastcall TBookManagerFrm::TBookManagerFrm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TBookManagerFrm::AddBookBtnClick(TObject *Sender)
{
    // sql query to add entry to database (table books)
}
//---------------------------------------------------------------------------
