//---------------------------------------------------------------------------

#ifndef ExceptionlogH
#define ExceptionlogH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TExceptionLogFrm : public TForm
{
__published:	// IDE-managed Components
    TMemo *ExceptionLogMemo;
private:	// User declarations
public:		// User declarations
    __fastcall TExceptionLogFrm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TExceptionLogFrm *ExceptionLogFrm;
//---------------------------------------------------------------------------
#endif
