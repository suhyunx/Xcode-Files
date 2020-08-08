//
//  main.cpp
//  20140115
//
//  Created by JM Park on 2014. 1. 15..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[])
{
    /*
   
    char * nyam=new char[50];
    char * yam=new char[50];
    
    
    cout << " 첫번째 문자를 입력해주세요 " << endl;
    cin >> nyam;
    
    cout << " 두번째 문자를 입력해주세요 " << endl;
    cin >> yam;
    
    if(nyam==yam)
        cout << " 문자가 같습니다 " << endl;
    
    else if(nyam!=yam)
        cout << " 문자가 서로 다릅니다 " << endl;
    */
    
    int count=0;
    bool equal=false;
    char * hi=new char[50];
    char * bye=new char[50];
    
    cout << " 첫번째 문자를 입력해주세요 " << endl;
    cin.getline(hi,50);
    
    cout << " 두번째 문자를 입력해주세요 " << endl;
    cin.getline(bye,50);
    
    while(hi[count]!=NULL) {
        if(hi[count] != *(bye+count)) {
            equal=false;
            break;
        }
        else
            equal=true;
        count++;
        if(hi[count]==NULL && bye[count]!=NULL)
            equal=false;
    }
    
    if(equal==true)
        cout << " 두개의 문자열은 같다 " << endl;
    else
        cout << " 두개의 문자열은 다르다 " << endl;
  
    /*
    
    
    int count=0;
    char * nyam=new char[50];
    
    
    cout << " 문자를 입력하십시오 " << endl;
    
    cin >> nyam;
    
    while(nyam[count]!=NULL)
        count++;
    
    cout << " 입력하신 문자수는 " << count << " 개 입니다 " << endl;
    
    
    
    /*
    
    int i;
    
    cin >> i;
    
    char *pid=new char [i];
    char *ppw=new char [16];
    char *php=new char [13];
    char *paddr=new char [70];
    
    cout << " 아이디를 입력하세요 " << endl;
    cin >> pid;
    
    cout << " 암호를 입력하세요 " << endl;
    cin >> ppw;
    
    cout << " 전화번호를 입력해주세요 " << endl;
    cin >> php;
    
    cout << " 주소를 입력해주세요 " << endl;
    cin >> paddr;
    
    
    cout << " 회원가입하신 정보입니다 " << endl;
    cout << " 아이디 : " << pid << endl;
    cout << " 비밀번호 : " << ppw << endl;
    cout << " 전화번호 : " << php << endl;
    cout << " 주소 : " << paddr << endl;
    
    
    delete [] pid;
    delete [] ppw;
    delete [] php;
    delete [] paddr;
    
     
     
     */
    
}

