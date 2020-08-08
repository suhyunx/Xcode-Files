//
//  main.cpp
//  20140129_2
//
//  Created by JM Park on 2014. 1. 29..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

struct attack {
    char id;
    int hp;
    bool sex;
};

struct magic {
    char id;
    int hp;
    int mana;
    bool sex;
};

struct wolf {
    char id;
    int hp;
};

struct snake {
    char id;
    int hp;
};

void input_man(attack *char1, magic *char2, int character);

void input_mon(wolf *mon1, snake *mon2, int monster);

int main(int argc, const char * argv[])
{
    int character;
    int monster;
    attack char1;
    magic char2;
    wolf mon1;
    snake mon2;
    
    cout << " 전사를 선택하십시오 " << endl;
    cout << " 1) 전사, 2) 마법사 " << endl;
    cin >> character;
    
    input_man(&char1, &char2, character);
    input_mon(&mon1, &mon2, monster);
    
    
    
    
}

void input_man(attack *char1, magic *char2, int character) {
    if(character==1) {
        char1->id=*new char[20];
        char1->hp=1000;
        
        cout << " 아이디를 입력하세요 " << endl;
        cin >> char1->id;
        
    }
    
    
        
    if(character==2) {
        char2->id=*new char[20];
        char2->hp=1000;
        char2->mana=500;
        
        cout << " 아이디를 입력하세요 " << endl;
        cin >> char2->id;
            
        }
    
}


void input_mon(wolf *mon1, snake *mon2, int monster) {
    if(monster==1) {
        mon1->id=*new char[20];
        mon1->hp=500;
        
        cout << " 아이디를 입력해주세요 " << endl;
        cin >> mon1->id;
        
    }
    
    if(monster==2) {
        mon2->id=*new char[20];
        mon2->hp=200;
        
        cout << " 아이디를 입력해주세요 " << endl;
        cin >> mon2->id;
    }
}






