#include "Test.h"

void Test::runTestSuite(){
  testSize0();
  testIsEmpty();
  testAddBackOnEmpty();
}

bool Test::testSize0(){
  LinkedListOfInts testList;
  std::cout<<"Test 1: size of empty list returns zero: ";

  if(testList.size() == 0){
    std::cout<<"Passed"<<std::endl;
  }
  else{
    std::cout<<"Failed! Size returned: "<<testList.size()<<std::endl;
  }
  return(testList.size() == 0);
}

bool Test::testIsEmpty(){
  LinkedListOfInts testList;
  std::cout<<"Test 2: is empty returns true on empty list: ";

  if(testList.isEmpty()){
    std::cout<<"Passed!"<<std::endl;
  }
  else{
    std::cout<<"Failed! Is Empty returned: "<<testList.isEmpty()<<std::endl;
  }
  return(testList.isEmpty());
}

bool Test::testAddBackOnEmpty(){
  LinkedListOfInts testList;
  std::cout<<"Test 3: add back adds node to end of list: ";

  testList.addBack(1);

  if(testList.size() == 1){
    std::cout<<"Passed!"<<std::endl;
    return(true);
  }
  else{
    std::cout<<"Failed!"<<std::endl;
    return(false);
  }
}
