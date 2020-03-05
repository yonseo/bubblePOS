/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   database.cpp
 * Author: Yonseo
 * 
 * Created on March 4, 2020, 12:34 PM
 */

//#include "database.h"
#include <iostream>

using namespace std;


//callback function
static int callback(void *data, int argc, char **argv, char **azColName){
   int i;
   fprintf(stderr, "%s: ", (const char*)data);
   
   for(i = 0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   
   printf("\n");
   return 0;
}

class Database {
    //access specifier
    public:
        sqlite3 *db;
        char *zErrMsg = 0;
        string sql;
        //int result
        //string db_name = "data.db";

        int result = sqlite3_open("db/data.db", &db);
        //need a function
        int launch()
        {
            if( result ) {
               cout << "Can't open database: %s\n", sqlite3_errmsg(db);
               return(0);
            } else {
               cout << "Opened database successfully\n";
               
                /* Create SQL statement */
                //sql = "SELECT * from bubbles";
                /* Execute SQL statement */
                result = sqlite3_exec(db, "SELECT * FROM bubbles", callback, NULL, &zErrMsg);
                //Test for query
                if( result != SQLITE_OK ) {
                   fprintf(stderr, "SQL error: %s\n", zErrMsg);
                   sqlite3_free(zErrMsg);
                } 
                else 
                {
                   fprintf(stdout, "Operation done successfully. \n");
                }
               
               
            }//end else
            sqlite3_close(db); //close the database
            return 0;
        }
   
        
};

