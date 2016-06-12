/*
 * min_max_2d_vector.cpp
 *
 *  Created on: Jun 6, 2016
 *      Author: oyashi
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    vector< vector<int> > some_values(4,vector<int>(4));

    cout << "Please enter vector elements " << endl;
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }

    for(int i = 0;i < 4;i++){
       for(int j = 0;j < 4;j++){
            some_values[i][j] = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
       }
    }

    vector<int> oneDimVector;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            oneDimVector.push_back(some_values[i][j]);
            cout << some_values[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    vector<int>::iterator maxElement = maxElement = max_element(oneDimVector.begin(), oneDimVector.end());
    vector<int>::iterator minElement = min_element(oneDimVector.begin(),oneDimVector.end());

    for(vector<int>::iterator it = oneDimVector.begin(); it != oneDimVector.end(); ++it){
        cout << *it << " ";
    }

    int dist = distance(oneDimVector.begin(), maxElement);
    int col = dist % 4;
    int row = dist / 4;

    int distMin = distance(oneDimVector.begin(), minElement);
    int colMin = distMin % 4;
    int rowMin = distMin / 4;

    cout << endl;
    cout << endl;
    cout << "Max element is " << *maxElement << " at" << " " << row << "," << col << endl;
    cout << "Min element is " << *minElement << " at" << " " << rowMin << "," << colMin << endl;


    return 0;
}



