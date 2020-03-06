

/* 
 * File:   index.cpp
 * Author: Yonseo
 *
 * Created on March 4, 2020, 12:16 PM
 */

#include <iostream>
#include <sqlite3.h> //be specific when including headers that have been linked in the IDE
#include "bootstrap.cpp" //include bootstrap to all other files
#include "order.cpp"

using namespace std;

/*
 * 
 */
int main(int argc, char* argv[]) {
    
    cout << "Successfully loaded header files. \n";
    cout << "Testing database connection. \n";
   
    
    cout << "Welcome to Tea POS software v1.0. \n";
    cout << "Testing for custom order. \n";
    
    //place an order
    Order order;
    order.drink(1, 1, 50, 2, 3, 1, 3);
    
    
     //open new database connection
    //Database conn;
    //conn.launch();
    
    

    return 0;
}

