

/* 
 * File:   order.cpp
 * Author: Yonseo
 * 
 * Created on March 4, 2020, 6:49 PM
 */

//#include "order.h"

//order options
//How it should work:

// 1) return all available options in Menu starting with the tea category and continue with the rest.\
// 2) save the order options from the customer to an array.
// 3) the array will be returned as a receipt and a cost will be provided in that receipt


// build an array of customer order
//do not query data! just make the customer order array

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

class Order 
{
    
    
    public:
        int tea; //unique id for tea type
        int cup_size; // string for cup size
        int sugar; //sugar in percentage (stored as decimal, no other option for sugar yet!)
        int ice; //string, only three options (little, half, full)
        int milk; //string,milk type 
        int bubbles; //bubbles as array [[type, count]]  (type of bubble is stored as id# NOT a string!)  
               //example: [[1, 2], [2, 1], [3, 1]
        int drink_price;// based on all parameters above
        int count; // how many of this drink
        int i;
        
        //type of tea
        int drink(int tea, int cup_size, int sugar, int ice, int milk, int bubbles, int count)
        {
            //unique id# for tea type
            // id: 1 teaName: black
            int array[] = {tea, cup_size, sugar, ice, milk, bubbles, count}; //integer only array. ERROR upon string input! (only use integers!)
            cout << "You have selected these options:\n";
            //loop through elements of array and print
            for(i = 0; i < sizeof(array) / sizeof(array[0]); i++)
            {
                cout << array[i] << "\n"; //printing ERROR! NOT ACTUAL ARRAY ELEMENTS! (maybe size of integer?) (Semicolon was placed after for loop(); removed and solved!)
                //sizeof(array) returns the number of bytes the array occupies NOT the number of elements in the array
            }
             cout << "There are " << sizeof(array) / sizeof(array[0]) << " elements in the array. \n";
             cout << "return array element 4 -> " << array[4];
            
            
            return 0; //return zero for successful
        };

        //single drink
        //how many arguments?
        //will it increase? // better not to.
        //drink [];
     
    
};

