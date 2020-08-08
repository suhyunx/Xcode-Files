//
//  main.cpp
//  20131120_4
//
//  Created by JM Park on 13. 11. 20..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    /*
    char id[15];
    char pw[13];
    char name[10];
    char ad[70];
    char hp[15];
    
    cout << " ID를 입력해주세요 " << endl;
    cin >> id;
    
    cout << " 암호를 입력해주세요 " << endl;
    cin >> pw;
    
    cout << " 이름을 입력해주세요 " << endl;
    cin >> name;
    
    cout << " 주소를 입력해주세요 " << endl;
    cin >> ad;
    
    cout << " 휴대폰 번호를 입력해주세요 " << endl;
    cin >> hp;
    
   
    cout << " 입력하신 정보입니다 " << endl;
    
    cout << " ID : " << id << endl;
    cout << " 암호 : " << pw << endl;
    cout << " 이름 : " << name << endl;
    cout << " 주소 : " << ad << endl;
    cout << " 휴대폰 번호 : " << hp << endl;
    
    cout << " 회원가입이 완료되었습니다 " << endl;
    */
    
    char id[16];
    char pw1[15];
    char pw2[15];
    char name[10];
    char add[50];
    char hp[20];
    char sex[10];
    int count=0;
    int i=0;
    bool restart=false;
    
    
    while(1) {
        if(restart==false)
            cout << " 아이디를 입력해주세요 ( 아이디는 8자이상 최대 15자까지 입력해주세요 ) : " << endl;
        else
            cout << " 아이디가 8자보다 작습니다. 다시 입력해주세요 : " << endl;
        cin >> id;
        while(id[i]!='\0') {
            count++;
            i++;
        }
        if(count>=8)
            break;
        else {
            count=0;
            i=0;
            restart=true;
        }
    }
    
    restart=false;
    count=0;
    i=0;
    while(1) {
        if(restart==false)
            cout << " 암호를 입력해주세요. ( 암호는 8자이상 최대 15자까지 입력해주세요 ) : " << endl;
        else
            cout << " 암호가 8자보다 작거나 같지 않습니다. 다시 입력해주세요 : " << endl;
        
        cin >> pw1;
        cout << " 암호를 확인해주십시오 " << endl;
        cin >> pw2;
        
        while(pw1[i]!='\0') {
            count++;
            i++;
        }
        if(count>=8) {
            i=0;
            while(pw1[i]!='\0' ) {
                if(pw1[i]!=pw2[i]) {
                    count=0;
                    i=0;
                    restart=true;
                    break;
                }
                restart=false;
                i++;
            }
            if(restart==false)
                break;
        }
        else {
            count=0;
            i=0;
            restart=true;
        }
    }
    
    cout << " 이름을 입력해주세요 " << endl;
    cin >> name;
    

    
    cout << " 주소를 입력해주세요 " << endl;
        fflush(stdin);
    cin >> add;
    cout << " 휴대전화를 입력해주세요 " << endl;
        fflush(stdin);
    cin >> hp;
    
    
    cout << " 성별을 입력해주세요 " << endl;
        fflush(stdin);
    cin >> sex;

    fflush(stdin);

    cout << " ID : " << id << endl;
    cout << " PW : " << pw1 << endl;
    cout << " 이름 " << name << endl;
    cout << " 주소 : " << add << endl;
    cout << " 휴대전화 : " << hp << endl;
    cout << " 성별 : " << sex << endl;
    
    return 0;
}

