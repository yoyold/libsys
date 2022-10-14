//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Exceptionlog.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TExceptionLogFrm *ExceptionLogFrm;
//---------------------------------------------------------------------------
__fastcall TExceptionLogFrm::TExceptionLogFrm(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
