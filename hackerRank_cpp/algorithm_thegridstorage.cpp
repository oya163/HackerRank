#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }
        
        int count= 0;
        int k,l;
        for(int i = 0; i < R-r; i++){
            for(int j = 0; j < C-c; j++){
                if(G[i][j] == P[0][0]){
                    k = 0;l = 0;
                    while(k < r){
                        if (G[i+k][j+l] == P[k][l]){
                                while(l < c){
                                    if(G[i+k][j+l] == P[k][l]){
                                        count++; 
                                        l++;        
                                    }
                                    else{
                                        count--;
                                        break;
                                    }
                                }
                        l = 0;
                        k++;
                        }
                        else{
                            break;
                        }
                    }
                    k = 0;

                }
            }
            k=0;l=0;
        }

                    if(count == r*c ){
                        cout << count << " = " << r*c << endl;
                        cout << "YES" << endl;
                    }
                    else{
                        cout << "NO" << endl;
                    }
    }
    return 0;
}
