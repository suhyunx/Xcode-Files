//
//  main.cpp
//  20131120_2
//
//  Created by JM Park on 13. 11. 20..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    const int size=5;
    int kor[size];
    int sum=0;
    int avg=0;
    
    int *pkor;
    
    pkor=kor;
    
    cout << " 국어 점수를 입력하십시오 " << endl;
    
    for(int i=0; i<size; i++){
        cin >> pkor[i];
    }
    
    for(int i=0; i<size; i++) {
        sum+=*(pkor+i);
    }
    
    avg=(int)(sum/size);
    
    cout << " 국어점수의 합계는 " << sum << " 입니다 " << endl;
    cout << " 국어점수의 평균는 " << avg << " 입니다 " << endl;
    
    return 0;
}

