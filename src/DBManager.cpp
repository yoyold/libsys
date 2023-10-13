//---------------------------------------------------------------------------

#pragma hdrstop

#include "DBManager.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include <System.SysUtils.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Stan.Def.hpp>

#include "DBManager.h"

DBManager::DBManager() {
    FDConnection = new TFDConnection(NULL);
    FDConnection->Params->Clear();
    FDConnection->Params->Add("DriverID=SQLite");
	FDConnection->Connected = false; // Initialize the connection as not connected
}

DBManager::~DBManager() {
	delete FDConnection;
}

bool DBManager::Connect(const String& dbName) {
	FDConnection->Params->Clear();
        FDConnection->Params->Add("DriverID=SQLite");
        FDConnection->Params->Add("Database=" + dbName);
		try {
            FDConnection->Connected = true;
            return true; // Connected successfully
		} catch (...) {
			return false; // Connection failed
		}
}

void DBManager::Disconnect() {
	 FDConnection->Connected = false;
}


TFDConnection* DBManager::GetConnection() {
    return FDConnection;
}
//---------------------------------------------------------------------------

