/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   index.cpp
 * Author: Yonseo
 *
 * Created on March 4, 2020, 12:16 PM
 */

#include <iostream>
#include <sqlite3.h> //be specific when including headers that have been linked in the IDE
#include "bootstrap.cpp" //include bootstrap to all other files

using namespace std;

/*
 * 
 */
int main(int argc, char* argv[]) {
    
    cout << "Successfully loaded header files. \n";
    cout << "Testing database connection. \n";
   
    
    cout << "Welcome to Tea POS software v1.0. \n";
    cout << "Return available bubbles \n";
    
     //open new database connection
    Database conn;
    conn.launch();
    
    

    return 0;
}

