//
//  main.cpp
//  20140127_2
//
//  Created by JM Park on 2014. 1. 27..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

void tf(int (*)[3]);

int main(int argc, const char * argv[])
{
    int arr[2][3]={100,200,300,400,500,600};
    
    tf(arr);
}

void tf(int (*parr)[3]) {
    
    int sum=0, sub=0;
    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            sum+=parr[i][j];
    
    
    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            sub-=parr[i][j];
    
    cout << sum << endl;
    cout << sub << endl;
    
    
}
