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
    void runTestSuite();
    //tests if size of empty list is zero
    bool testSize0();

    bool test2();

};

#endif
