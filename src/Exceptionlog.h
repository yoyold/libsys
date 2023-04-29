//---------------------------------------------------------------------------

#ifndef ExceptionlogH
#define ExceptionlogH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <stdexcept>
#include <fstream>
#include <string>
//---------------------------------------------------------------------------
class TExceptionLogFrm : public TForm
{
__published:	// IDE-managed Components
    TMemo *ExceptionLogMemo;
private:	// User declarations
	void displayLogFile(const std::string& filename, TMemo* memo) const;
public:		// User declarations
    __fastcall TExceptionLogFrm(TComponent* Owner);
};

class ExceptionLog {
public:
    ExceptionLog(const std::string& filename);
    void logException(const std::exception& e);
private:
	std::ofstream m_logFile;
};


//---------------------------------------------------------------------------
extern PACKAGE TExceptionLogFrm *ExceptionLogFrm;
//---------------------------------------------------------------------------
#endif
