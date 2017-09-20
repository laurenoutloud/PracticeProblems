#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//My solution to hackerrank's Variable Sized Arrays problem

int main() {
    int n, q, k, x, y, tmp;
    vector<int> v; //placeholder vector
    vector<vector<int>> vectorMatrix; //create vector of integer vectors



    cin >> n >> q; //read in values for n (number of arrays) and q (number of queries)
    //cout << n << " " << q;

    for (int i = 0; i < n; i++){
        cin >> k;
        vectorMatrix.push_back(v); //add vector v to vectorMatrix as place holder
        //cout << "\n"<< k << " ";

        for (int j = 0; j < k; j++){
            cin >> tmp; //read in array values
            vectorMatrix[i].push_back(tmp); //add values to vector located at index i of vectorMatrix
            //cout << vectorMatrix[i][j] << " ";
        }

    }
    for (int i = 0; i < q; i++){
        cin >> x >> y; //read in index values stated by queries

        cout << vectorMatrix[x][y] << endl; //print out value stored at the given index
    }

    return 0;
}
