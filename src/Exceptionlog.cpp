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
<<<<<<< HEAD
	displayLogFile("logfile.txt");
}

void TExceptionLogFrm::displayLogFile(const std::string& filename)
{
	ExceptionLogMemo->Lines->LoadFromFile(filename.c_str());
=======
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
>>>>>>> hotfix/bookmanager-vcl-reference
}

//---------------------------------------------------------------------------
ExceptionLog::ExceptionLog(const std::string& filename)
	: m_logFile(filename, std::ios::app)
{
<<<<<<< HEAD
	if (!m_logFile.is_open()) {
		throw std::runtime_error("Could not open log file");
    }
=======
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
>>>>>>> hotfix/bookmanager-vcl-reference
}

void ExceptionLog::logException(const std::exception& e)
{
    m_logFile << "Exception caught: " << e.what() << std::endl;
}


