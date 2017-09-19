#include <iostream>
using namespace std;
//Given  two eggs find the highest floor an egg can be dropped from a 100 floor building without breaking

int findHighestFloor(int breakingPoint){ //function that finds the highest floor from which an egg can safely be dropped
  int eggsRemaining = 2;
  int currentFloor = 0;
  int dropInterval = 14;
  int lastVisitedFloor = 1;

  //because the problem contains a triangular series, we use the formula ((n*n)-n)/2, which rounds up to 14 for 100.
  //Therefore, our initial drop interval will be 14 and we will decrease the interval by one each time until the first egg breaks
  while (eggsRemaining >  1){
    lastVisitedFloor = currentFloor; //save the floor that we lasted tried to drop an egg from where it did not break
    currentFloor = currentFloor + dropInterval; //calculate next floor to test egg from
    if (currentFloor >= breakingPoint){
      eggsRemaining = eggsRemaining - 1;
    }
    dropInterval = dropInterval -1;
  }
  currentFloor = lastVisitedFloor; //after first egg breaks go back to the last floor we had a successful drop from
  while (eggsRemaining > 0){

    currentFloor = currentFloor +1; //if 2nd egg did not break, go up one floor and try again

    if(currentFloor == breakingPoint){
      eggsRemaining = eggsRemaining -1;
    }


  }
  return currentFloor - 1; // we return the floor we were on before the 2nd egg break

}



int main(){
  int breakingPoint = 46; //The egg will break starting from this floor, so all floors below this number the egg will not break
  int highestFloor = 0;
  highestFloor = findHighestFloor(breakingPoint);

  cout << highestFloor << endl;
  return 0;
}
