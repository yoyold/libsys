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
	displayLogFile("logfile.txt", ExceptionLogMemo);
}

void TExceptionLogFrm::displayLogFile(const std::string& filename, TMemo* memo) const
{
	std::ifstream logFile(filename);
	if (!logFile.is_open()) {
        throw std::runtime_error("Could not open log file for reading");
    }
	std::string line;
	while (std::getline(logFile, line)) {
        memo->Lines->Add(line.c_str());
    }
}

//---------------------------------------------------------------------------
ExceptionLog::ExceptionLog(const std::string& filename)
	: m_logFile(filename, std::ios::app)
{
	std::ifstream logFile(filename);
	if (!logFile.is_open()) {
        std::ofstream newLogFile(filename);
        if (!newLogFile.is_open()) {
			throw std::runtime_error("Could not create log file");
        }
        else {
			newLogFile.close();
		}
    }
    else {
        logFile.close();
	}
}

void ExceptionLog::logException(const std::exception& e)
{
    m_logFile << "Exception caught: " << e.what() << std::endl;
}


