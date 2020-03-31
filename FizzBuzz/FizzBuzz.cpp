//
//  FizzBuzz.cpp
//  FizzBuzz
//
//  Created by admin on 31/03/2020.
//  Copyright © 2020 JZ. All rights reserved.
//

#include "FizzBuzz.hpp"
#include <iostream>

std::string fizzBuzz(int value) {
    std::string retVal = "";
    
    if (value % 3 == 0)
        retVal.append("Fizz");
    if (value % 5 == 0)
        retVal.append("Buzz");
    
    if (retVal.size() == 0)
        return std::to_string(value);
    
    return retVal;
}

