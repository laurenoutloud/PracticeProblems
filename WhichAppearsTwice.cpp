#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

/* You are given a vector of n+1 numbers. Every number in the range
1..n appears only once except for one number that appears twice.
Find the number that appears twice. */

int findDuplicate(vector<int> v){
  int duplicate;
  int sumN = 0;
  int sumV = 0;
  int n;
  n = v.size() - 1; //subtract 1 from size of v because v contains an extra duplicate value

  if (n==2){ // edge case for if the vector contains two 1s
    duplicate = 1;
    return duplicate;
  }
  else {
    sumN = (((n*n)+n)/2); //can use formula to find sum of n of a triangle series 1..n where each number appears only once

    for (int i = 0; i < v.size(); i++){
      sumV = v[i] + sumV; //get sum of all values in vector v
    }

    duplicate = sumV - sumN; //subtract size of 1..n from size of vector to get value of duplicate integer
    return duplicate;
  }
}

int main(){
  int size = 10;
  int duplicate;
  vector<int> vectorList(size);

  for (int i = 0; i < vectorList.size(); i++){ //create vectore for testing
    vectorList[i] = i+1;
  }
  vectorList.push_back(3);


  duplicate = findDuplicate(vectorList);
  cout << duplicate;

  return 0;
}
