//
//  main.cpp
//  InsertionSort
//
//  Created by Burak  on 11.11.2020.
//

#include "insertionSort.h"

void insertionSort(vector<int>& v){
    int i,j,x;
    int count=v.size();
    
    for(i=1;i<count;i++){
        x=v[i];
        for(j=i-1;v[j]>x && j>=0;j--){
                   
                v[j+1]=v[j];
        }
    v[j+1]=x;
    }
}

