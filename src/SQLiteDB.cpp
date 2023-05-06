//---------------------------------------------------------------------------

#pragma hdrstop

#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.SqlExpr.hpp>

#include "SQLiteDB.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include "SQLiteDB.h"

SQLiteDB::SQLiteDB()
{
    connection = new TSQLConnection(NULL);
    connection->DriverName = "SQLite";
    connection->Params->Add("Database=" + DB_NAME);
    connection->Open();
}

SQLiteDB::~SQLiteDB()
{
    connection->Close();
    delete connection;
}

TSQLQuery* SQLiteDB::CreateQuery()
{
    TSQLQuery* query = new TSQLQuery(NULL);
    query->SQLConnection = connection;
    return query;
}

TSQLTable* SQLiteDB::CreateTable()
{
    TSQLTable* table = new TSQLTable(NULL);
    table->SQLConnection = connection;
    return table;
}
