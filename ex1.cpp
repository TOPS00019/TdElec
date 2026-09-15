#include <iostream>


using namespace std;

int average(int A[], int n){
    float s = 0;
    for(int i=0; i<n ; i++){
        s += A[i];
    }


    return s/n;
}

int fibo(int n){
    int x0 = 0;
    int x1 = 1;
    int a = 0;
    for(int i=2;i<n+1; i++){
        a = x0;
        x0 = x1;
        x1 = x1 + a;
    }
    return x1;
}


int main(){

    /*
    int A[5] = {10,20,10,10,10};
    int n = size(A);
    int m = 0;
    cout << average(A, n) << endl;

    cin >> m;
    cout << fibo(m) << endl;
    */

    return 0;
}
