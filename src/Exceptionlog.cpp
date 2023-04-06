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
	displayLogFile("logfile.txt");
}

void TExceptionLogFrm::displayLogFile(const std::string& filename)
{
	ExceptionLogMemo->Lines->LoadFromFile(filename.c_str());
}

//---------------------------------------------------------------------------
ExceptionLog::ExceptionLog(const std::string& filename)
	: m_logFile(filename, std::ios::app)
{
	if (!m_logFile.is_open()) {
		throw std::runtime_error("Could not open log file");
    }
}

void ExceptionLog::logException(const std::exception& e)
{
    m_logFile << "Exception caught: " << e.what() << std::endl;
}


