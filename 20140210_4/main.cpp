//
//  main.cpp
//  20140210_4
//
//  Created by JM Park on 2014. 2. 10..
//  Copyright (c) 2014년 JM Park. All rights reserved.
//

#include <iostream>

using namespace std;

class paradin {
private:
    char * user_id;
    int hp;
    char * sword;
    char * defence;
public:
    paradin() {
        // 기본 생성값
        hp=500;
    }
    paradin(int php, const char * psword, const char * pdefence) {
        hp=php;
        sword=new char[strlen(sword)+1];
        defence=new char[strlen(defence)+1];
        strcpy(sword, psword);
        strcpy(defence, pdefence);
    }
    paradin(paradin &temp) {
        hp=temp.hp;
    }
    void input_name() {
        user_id=new char[20];
        cin.getline(user_id,20);
    }
    void output_list() {
        cout << user_id << " / " << hp << " / " << sword << " / " << defence << endl;
    }
};

class wolf {
private:
    char * name;
    int hp;
    char * attack;
public:
    wolf() {
        name=new char[20];
        strcpy(name,"늑대");
        hp=300;
        attack=new char[20];
        strcpy(attack,"앞발후리기");
    }
    wolf(wolf &temp) {
        name=new char[20];
        strcpy(name,temp.name);
        hp=temp.hp;
        attack=new char[20];
        strcpy(attack,temp.attack);
    }
    void out_monster() {
        cout << name << " / " << hp << " / " << attack << endl;
    }
};

int main(int argc, const char * argv[])
{
    paradin user1;
    paradin user2=user1;
    
    wolf mon1;
    wolf mon2=mon1;
    wolf mon3=mon1;
    mon1.out_monster();
    mon2.out_monster();
    mon3.out_monster();
    
    
}

