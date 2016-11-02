/*
*  @author Chris Porras
*  @version 1.0
*/

#ifndef TEST_H
#define  TEST_H

#include "List.h"
#include "LinkedListOfInts.h"
#include "Node.h"
#include <iostream>

class Test{

  public:
    void runTestSuite();        //runs all the include tests
    bool testSize0();           //tests if size of empty list is zero
    bool testIsEmpty();         //tests if isEmpty returns correct value
    bool testAddBackOnEmpty();  //tests if addBack works on an empty list

};

#endif
