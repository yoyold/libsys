//---------------------------------------------------------------------------

#ifndef LibsysMainDlgH
#define LibsysMainDlgH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Samples.Calendar.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TMainMenu *MainMenu;
	TMenuItem *BookItem;
	TMenuItem *stem;
	TMenuItem *AdminItem;
	TMenuItem *UsersItem;
	TMenuItem *Statistics;
	TMenuItem *AboutItem;
	TMenuItem *LogsItem;
	TMenuItem *AccessItem;
	TMenuItem *CustomerInfoItem;
	TMenuItem *MembershipItem;
private:	// User declarations
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
