#include "Test.h"

void Test::runTestSuite(){
  testSize0();
  testIsEmpty();
  testSize1();
  testSize2();
  testSize3();
  testRemoveFrontOnEmpty();
  testRemoveBackOnEmpty();
  testRemoveFront();
  testRemoveBack();
  testAddBack();
  testAddFront();

}

bool Test::testSize0(){
  LinkedListOfInts testList;
  std::cout<<"Test 1: size of empty list returns zero: ";

  if(testList.size() == 0){
    std::cout<<"Passed!"<<std::endl;
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

bool Test::testSize1(){
  LinkedListOfInts testList;
  std::cout<<"Test 3: size of list after one addBack: ";

  testList.addBack(1);
  if(testList.size() == 1){
    std::cout<<"Passed!"<<std::endl;
  }
  else{
    std::cout<<"Failed! Size returned: "<<testList.size()<<std::endl;
  }
  return(testList.size() == 1);
}

bool Test::testSize2(){
  LinkedListOfInts testList;
  std::cout<<"Test 4: size of list after one addFront: ";

  testList.addFront(1);
  if(testList.size() == 1){
    std::cout<<"Passed!"<<std::endl;
  }
  else{
    std::cout<<"Failed! Size returned: "<<testList.size()<<std::endl;
  }
  return(testList.size() == 1);
}

bool Test::testSize3(){
  LinkedListOfInts testList;
  std::cout<<"Test 5: size of list after multiple addBacks: ";

  testList.addBack(1);
  testList.addBack(2);
  testList.addBack(3);
  if(testList.size() == 3){
    std::cout<<"Passed!"<<std::endl;
  }
  else{
    std::cout<<"Failed! Expected Size = 3. Size returned: "<<testList.size()<<std::endl;
  }
  return(testList.size() == 3);
}

bool Test::testRemoveFrontOnEmpty(){
  LinkedListOfInts  testList;
  std::cout<<"Test 6: Remove Front on empty list returns size 0: ";

  testList.removeFront();

  if(testList.size()==0){
    std::cout<<"Passed!"<<std::endl;
  }
  else{
    std::cout<<"Failed! Expected Size = 0. Size returned: "<<testList.size()<<std::endl;
  }
  return(testList.size() == 0);
}

bool Test::testRemoveBackOnEmpty(){
  LinkedListOfInts  testList;
  std::cout<<"Test 7: Remove Back on empty list returns size 0: ";

  testList.removeBack();

  if(testList.size()==0){
    std::cout<<"Passed!"<<std::endl;
  }
  else{
    std::cout<<"Failed! Expected Size = 0. Size returned: "<<testList.size()<<std::endl;
  }
  return(testList.size()==0);
}

bool Test::testRemoveFront(){
  LinkedListOfInts  testList;
  std::cout<<"Test 8: Remove Front on list returns correct size: ";

  testList.addBack(1);
  testList.addBack(2);
  testList.addBack(3);
  testList.addBack(4);

  testList.removeFront();

  if(testList.size()==3){
    std::cout<<"Passed!"<<std::endl;
  }
  else{
    std::cout<<"Failed! Expected Size = 3. Size returned: "<<testList.size()<<std::endl;
  }
  return(testList.size()==3);
}

bool Test::testRemoveBack(){
  LinkedListOfInts  testList;
  std::cout<<"Test 9: Remove Back on list returns correct size: ";

  testList.addBack(1);
  testList.addBack(2);
  testList.addBack(3);
  testList.addBack(4);

  testList.removeBack();

  if(testList.size()==3){
    std::cout<<"Passed!"<<std::endl;
  }
  else{
    std::cout<<"Failed! Expected Size = 3. Size returned: "<<testList.size()<<std::endl;
  }
  return(testList.size()==3);
}

bool Test::testAddBack(){
  LinkedListOfInts  testList;
  std::cout<<"Test 10: Add Back adds items in correct order: ";

  testList.addBack(1);
  testList.addBack(2);
  testList.addBack(3);
  testList.addBack(4);

  std::vector<int> values = testList.toVector();
  bool passed = true;

  int i = 0;

  while(i<4 && passed){
    if(i+1 == values[i]){
      passed = true;
    }
    else{
      passed = false;
    }
    i++;
  }

  if(passed){
    std::cout<<"Passed!"<<std::endl;
  }
  else{
    std::cout<<"Failed! List should be 1; 2; 3; 4; Returns: ";
    for(i=0;i<4;i++){
      std::cout<<values[i]<<"; ";
    }
    std::cout<<std::endl;
  }
  return(passed);
}

bool Test::testAddFront(){
  LinkedListOfInts  testList;
  std::cout<<"Test 11: Add Front adds items in correct order: ";

  testList.addFront(4);
  testList.addFront(3);
  testList.addFront(2);
  testList.addFront(1);

  std::vector<int> values = testList.toVector();
  bool passed = true;

  int i = 0;

  while(i<4 && passed){
    if(i+1 == values[i]){
      passed = true;
    }
    else{
      passed = false;
    }
    i++;
  }

  if(passed){
    std::cout<<"Passed!"<<std::endl;
  }
  else{
    std::cout<<"Failed! List should be 1; 2; 3; 4; Returns: ";
    for(i=0;i<4;i++){
      std::cout<<values[i]<<"; ";
    }
    std::cout<<std::endl;
  }
  return(passed);
}