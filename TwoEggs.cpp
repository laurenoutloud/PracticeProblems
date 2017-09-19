#include <iostream>
using namespace std;
//Given  two eggs find the highest floor an egg can be dropped from a 100 floor building without breaking

int findHighestFloor(int breakingPoint){ //function that finds the highest floor from which an egg can safely be dropped
  int eggsRemaining = 2;
  int high = 100; //highest possible floor
  int low = 1; //lowest possible floor
  int mid; //mid point between highest and lowest possible floors
  int highestFloor; //variable used to store floor that egg can safely be dropped from when found

  while (eggsRemaining > 1){ //while we have more than one egg, we continue using binary search method until be break one
    mid = (high + low)/2;
    if (mid < breakingPoint){

      low = mid + 1; //if the breaking point floor of an egg is above the middle floor, we continue binary search
    } else if (mid >= breakingPoint) { //if breaking point is below mid that means we broke an egg and can no longer use binary search

      eggsRemaining = eggsRemaining - 1;
      high = mid;

    }
  }

  for (int i = low; eggsRemaining > 0; i++){ //once we break an egg we test all floors from the bottom up until our final egg breaks
    if (i == breakingPoint){
      eggsRemaining = eggsRemaining - 1; // once our egg breaks we stop searching
      highestFloor = i -1 ; //we return one minus the floor that the egg broke on
    }
  }


  return highestFloor;


}

int main(){
  int breakingPoint = 46; //The egg will break starting from this floor, so all floors below this number the egg will not break
  int highestFloor = 0;
  highestFloor = findHighestFloor(breakingPoint);

  cout << highestFloor << endl;
  return 0;
}
