//
//  main.cpp
//  class_activity11
//
//  Created by Sonia Lopchan on 9/15/24.

#include <iostream>
using namespace std;

int main()
{
    int value1, value2, largerValue;
    
    cout <<"Enter the first value: ";
    cin >> value1;
    
    cout <<"Enter the second value: ";
    cin >> value2;
    
    // Using If Statement
  /*  if (value1 > value2) {
        value1 = largerValue;
    }
        else {
            largerValue = value2;
    }
    
    cout << "The larger value is: " << largerValue << endl;
  */
    
    //Using Conditional Operator
    //condition ? expression_if_true : expression_if_false;
    largerValue = (value1 > value2)? value1 : value2;
    cout << "The larger value is: "<< largerValue << endl;
    
    return 0;
}
