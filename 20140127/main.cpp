//
//  main.cpp
//  20140127
//
//  Created by JM Park on 2014. 1. 27..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int arr[2][3]={100,200,300,400,500,600};
    int sum=0;
    int sub=0;
    
    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            sum+=arr[i][j];
    

    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            sub-=arr[i][j];
            // sub-=*(*(arr+i)+j);
    
    
    cout << sum << endl;
    cout << sub << endl;
    
    
}

