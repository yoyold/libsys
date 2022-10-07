//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BookManagerDlg.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

//---------------------------------------------------------------------------
__fastcall TBookManagerFrm::TBookManagerFrm(TComponent* Owner)
	: TForm(Owner)
{
}

void __fastcall TBookManagerFrm::AddBookBtnClick(TObject *Sender)
{
    // sql query to add entry to database (table books)
}

// toggle read-only for all UI elements
void __fastcall TBookManagerFrm::EditModeCheckBoxClick(TObject *Sender)
{
	BookNameEdit->ReadOnly 		  = EditModeCheckBox->Checked;
	ISBNMaskEdit->ReadOnly 		  = EditModeCheckBox->Checked;
	AvailableNumberBox->ReadOnly  = EditModeCheckBox->Checked;
	TotalStockNumberBox->ReadOnly = EditModeCheckBox->Checked;
	BookTagsMemo->ReadOnly 		  = EditModeCheckBox->Checked;
}
//---------------------------------------------------------------------------

