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
    bool testSize1();           //tests if size on list is one after one addBack
    bool testSize2();           //tests if size on list is one ater one addFront
    bool testSize3();           //tests if size returns expected value after multiple addBacks
    bool testIsEmpty();         //tests if isEmpty returns correct value

};

#endif
