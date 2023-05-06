#ifndef SQLiteDBH
#define SQLiteDBH

#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.SqlExpr.hpp>

class SQLiteDB
{
private:
    TSQLConnection* connection;
    const UnicodeString DB_NAME = "libsys.db";

public:
    SQLiteDB();
    ~SQLiteDB();
    TSQLQuery* CreateQuery();
};

#endif
