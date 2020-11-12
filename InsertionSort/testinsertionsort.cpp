#include <iostream>
#include <vector>
#include "insertionSort.h"

int main(void)
{
    vector<int> v(12);
    v[0]=10; v[1]=9; v[2]=8; v[3]=11; v[4]=2; v[5]=5;
    v[6]=7; v[7]=12; v[8]=3; v[9]=6; v[10]=4; v[11]=1;
    
    cout << "initial vector: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    insertionSort(v);
    
    cout << "final   vector: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}

