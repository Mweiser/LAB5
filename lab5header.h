/*
 * lab5header.h
 *
 *  Created on: Oct 21, 2014
 *      Author: mweiser
 */

#ifndef LAB5HEADER_H_
#define LAB5HEADER_H_


#include<iostream>
#include<string>
#include<sstream>
#include <queue>
#include<cstdlib>
#define SIZE 10

using namespace std;

enum Condition {UNKNOWN, RELEASE,TEST,LABOUR,ADMIT};

class patient{

};


struct patientinfo {
string Firstname;
string Lastname;
int Hlthcardnumb;
//string Condition;// make it an enum
Condition pt_cond;
string cond;
int Bednumb;
double Contract_Rate;
double Dialated;

};
//typedef patientinfo Patientlist;
patientinfo *ptr;
class registry{

public:

void displayqueue(queue <int> myqueue){
while (!myqueue.empty()){
cout<<myqueue.front() << endl;
myqueue.pop();

}


}

void printinfo(int &patientnumb ,patientinfo Plist){

         cout << Plist.Lastname << ", ";
         cout << Plist.Firstname[0] << "       ";

         cout << Plist.Hlthcardnumb << "         ";
         cout << Plist.cond << "         ";
         cout << Plist.Bednumb << "        ";
         cout << Plist.Contract_Rate << "                   ";
         cout << Plist.Dialated<< endl;
         // prints Last name follow by first initial of first name, blood type, organ, age and year added.

}

void pusharray(queue<patientinfo> myqueue, patientinfo *Plist, int size, int end, int &patientnumb){
char tmp[size];

if (size==end){
         cout << "Queue is full"<< endl;

}
else{

	tmp[0]=Plist[0];
	for (int b=0; b<patientnumb;b++){
         Plist[b]=Plist[b+1];
	}

	tmp[0]= Plist[patientnumb+1]
	//myqueue.push(patientnumb);
         end++;

}

}

void poparray(patientinfo *ptr, patientinfo *Plist, int size, int end, int &patientnumb){
//char tmp[size];

	if (end=size){
         cout << "Queue is empty" << endl;
}

else{
	//ptr=Plist[0];
	//tmp[0]=Plist[0];
		for (int b=0; b<patientnumb;b++){
	        Plist[b]=Plist[b+1];
		}
		//Plist[patientnumb +1] = ptr;
		//tmp[0]= Plist[patientnumb+1]
         //myqueue.pop();
         end--;

}
}


void addpatient(patientinfo *Plist,int &patientnumb){
         string mystr;
         string condition;


         cout<< "[Add Patient]" << endl;
         cout<< "Please enter the Patient Record" << endl;
         cin.ignore();
         getline (cin, mystr);
         stringstream SS(mystr);
         SS >> Plist[patientnumb].Firstname;
         SS >> Plist[patientnumb].Lastname;
         SS >> Plist[patientnumb].Hlthcardnumb;
         //condition = "UNKNOWN";
         Plist[patientnumb].cond = "UNKNOWN";
         SS >> Plist[patientnumb].Bednumb;
         SS >> Plist[patientnumb].Contract_Rate;
         SS >> Plist[patientnumb].Dialated;

         //myqueue.push(Plist[patientnumb]);
         patientnumb++;

}

void removepatient(patientinfo *Plist, int &numpatient, int top){
//Plist


}

};



class menu{
public:

void labour(double Dialation, double Contract_Rate, queue<patientinfo> myqueue, patientinfo *Plist, int &patientnumb, patientinfo *ptr){
ptr = Plist[0];
for (int b=0; b<patientnumb;b++){
        Plist[b]=Plist[b+1];
	}
cout << "What is current Cervix Dialation (cm) and Contraction rate (/min)? "<< endl;
cin >>  Dialation >> Contract_Rate;


if((Dialation <4) && (Contract_Rate >=4)){

         myqueue.push(Plist[patientnumb]);
}


if((Dialation >=4) && (Contract_Rate<4)){

         cout <<ptr << " is being admitted to birthing unit"<< endl;


}

}



void release(queue <patientinfo> myqueue, patientinfo *Plist, int &patientnumb) {
         cout << Plist[patientnumb].Firstname << Plist[patientnumb].Lastname << " is leaving the hospital"<< endl;
         myqueue.pop();

}

void checkup(queue <patientinfo> myqueue, patientinfo *Plist, int &patientnumb){
         Plist[myqueue.front()].Dialated = "0";
         myqueue.pop();
         myqueue.push(Plist[patientnumb]);

}



void admit(queue <patientinfo> myqueue, patientinfo *Plist, int &patientnumb){
         cout << Plist[patientnumb].Firstname << Plist[patientnumb].Lastname << " is being admitted to birthing unit"<< endl;
         myqueue.pop();
}


void Doctor(int examine, patientinfo *Plist ){


examine = rand() % 4 + 1; // random number from 1 to 4
if (examine==1){

Plist[0].cond = "CHECK UP";

}
if (examine==2){

Plist[0].cond = "LABOUR";

}
if (examine==3){

Plist[0].cond = "RELEASE";

}
if (examine==4){

Plist[0].cond = "ADMIT";

}

};

void userinput(int &patientnumb);



#endif /* LAB5HEADER_H_ */
