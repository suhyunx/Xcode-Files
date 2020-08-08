//
//  main.cpp
//  20131126
//
//  Created by JM Park on 13. 11. 26..
//  Copyright (c) 2013년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
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
            cout << " Plese enter your id. ( MIN=8, MAX=15 ) " << endl;
        else
            cout << " ID is less than 8 characters. Please re-enter. " << endl;
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
            cout << " Plese enter your Password. ( MIN=8, MAX=15 ) " << endl;
        else
            cout << " Password is not the same as or less than 8 characters. Please re-enter. " << endl;
        
        cin >> pw1;
        cout << " Please check the password. " << endl;
        cin >> pw2;
        
        while(pw1[i]!='\0') {
            count++;
            i++;
        }
        if(count>=8) {
            i=0;
            while(pw1[i]!='\0') {
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
    
    cout << " Plese enter your name. " << endl;
    cin >> name;
    
    cout << " Plese enter your address. " << endl;
    fflush(stdin);
    cin >> add;
    
    cout << " Plese enter your h.p. " << endl;
    fflush(stdin);
    cin >> hp;
    
    cout << " Plese enter your sex. " << endl;
    fflush(stdin);
    cin >> sex;
    
    fflush(stdin);
    
    cout << " ID : " << id << endl;
    cout << " Password : " << pw1 << endl;
    cout << " Name : " << name << endl;
    cout << " Address : " << add << endl;
    cout << " H.P : " << hp << endl;
    cout << " Sex : " << sex << endl;
    
    return 0;
    
    
}

