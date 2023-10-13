//---------------------------------------------------------------------------

#ifndef DBManagerH
#define DBManagerH
//---------------------------------------------------------------------------

#include <System.SysUtils.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Stan.Def.hpp>

class DBManager {
private:
    TFDConnection *FDConnection;

public:
    DBManager();
    ~DBManager();

	bool Connect(const String& dbName);
    void Disconnect();
    TFDConnection* GetConnection();
};

#endif /* DBMANAGER_H */


