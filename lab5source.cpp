/*
 * lab5source.cpp
 *
 *  Created on: Oct 21, 2014
 *      Author: mweiser
 */

#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>
#include<cstdlib>
#include"lab5header.h"


using namespace std;

void userinput(int &patientnumb){


	cout << "how many patients will the hospital take? "<< endl;
	cin >> patientnumb;



}


/*
void printinfo(patientinfo Plist){

	cout <<	Plist.Lastname << ", ";
	cout << Plist.Firstname[0] << "       ";

	cout << Plist.Hlthcardnumb << "         ";
	cout << Plist.cond << "           ";
	cout << Plist.Bednumb << "      ";
	cout << Plist.Contract_Rate << "        ";
	cout << Plist.Dialated<< endl;
	// prints Last name follow by first initial of first name, blood type, organ, age and year added.

}



void Doctor(int examine, patientinfo *Plist, int &patientnumb ){


examine = rand() % 3 +1; // random number from 1 to 3
if (examine==1){

Plist[patientnumb].cond = "CHECK UP";

}
if (examine==2){

Plist[patientnumb].cond = "LABOUR";

}
if (examine==3){

Plist[patientnumb].cond = "RELEASE";

}
// 1 = Check Up
// 2 = Labour
// 3 = Release

}


void release(){


}

void test(){


}

void labour(){


}

void admit(){


}


void addtoqueue(patientinfo *Plist,int &patientnumb, char stack[]){

	int k=0;
	stack[k] = Plist[patientnumb];
k++;
}

void removefromqueue(){


}*/
