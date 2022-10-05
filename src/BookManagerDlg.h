//---------------------------------------------------------------------------

#ifndef BookManagerDlgH
#define BookManagerDlgH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TBookManagerFrm : public TForm
{
__published:	// IDE-managed Components
	TPanel *ClientPanel;
	TBitBtn *AddBookBtn;
	TBitBtn *SearchBookBtn;
	TBitBtn *ModifyBookBtn;
	TBitBtn *DeleteBookBtn;
	TEdit *BookNameEdit;
	TLabel *BookTitleLbl;
	TLabel *ISBNLbl;
	TMaskEdit *ISBNMaskEdit;
	TMemo *BookTagsMemo;
	TLabel *BookTagsLbl;
	void __fastcall AddBookBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TBookManagerFrm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBookManagerFrm *BookManagerFrm;
//---------------------------------------------------------------------------
#endif
