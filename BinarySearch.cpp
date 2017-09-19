#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int> v, int target){
  int floor = 0; //lower bound
  int ceiling = v.size() - 1; //upper bound (subtract one because in cpp indexes start at 0)
  int mid;

  while (floor <= ceiling){
    mid = ((ceiling - floor)/ 2) + floor;
    if (v[mid] == target){
      return true;
    } else if (v[mid] > target){ //if mid if greater than value you are searching for, lower your upperbound
      ceiling = mid -1 ;
    } else if (v[mid] < target){ //if mid is lower than the value you are searching for, raise your lowerbound
      floor = mid + 1;
    }
  }


  return false;
}

int main(){
  bool isFound;
  int target = 15; // number we are searching for
  vector<int> vectorList = {1, 3, 4, 5, 9, 12, 13, 16, 17, 18, 20}; //sample vector

  isFound = binarySearch(vectorList, target);

  if (isFound == 1){
    cout << "Target found" << endl;
  } else if (isFound == 0){
    cout << "Target not found" << endl;
  }
  return 0;
}
