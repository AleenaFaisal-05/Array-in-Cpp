#include<iostream>
using namespace std;
int main() {
int A[3][2] = {{1, 2}, {2,2}, {3, 3}};
    int B[2][3] = {{1,2,3}, {5,5,5}};
    int C[3][3] = {0};

    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            for (int k = 0; k < 2; k++) { 
				C[i][j] += A[i][k] * B[k][j]; 
            }
        }
    }

    // Output the result matrix C
    cout << "Result of A[3][2] * B[2][3] = C[3][3] is:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



