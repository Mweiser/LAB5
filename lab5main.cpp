/*
 * lab5main.cpp
 *
 *  Created on: Oct 21, 2014
 *      Author: mweiser
 */

#include<iostream>
#include<string>
#include<sstream>
#include"lab5header.h"
#include<cstdlib>
#include<queue>

using namespace std;




int main (){
int i=0;
//int k=0;
int end =0;
int top =0;
//char value;
menu my_menu;
registry my_registry;
int userinput;
int patientnumb = 0;
int examine;


std::queue<int> myqueue;
//int myint;


int size = SIZE;
cout << "how many patients will the hospital take? "<< endl;
cin >> size;

patientinfo Patientlist[size];
//patientinfo queue<size> ptqueue;



for(int j=0; j<100; j++){
string mystr;

cout << "Please choose an option: \n" << "1. Add Patient \n"<< "2. Show Patients \n" << "3. Examine Patient \n" << "4. Save info"<< endl;
cin >> userinput;

if( userinput==1){
my_registry.addpatient(Patientlist, patientnumb);
my_registry.pusharray(myqueue, Patientlist, size, end, patientnumb);
cout<< "blah"<< endl;
cout << myqueue.front()<< endl;
cout<< ".. [Adding]"<< endl;


//myqueue.push(Patientlist[patientnumb]);
i++;

}

if( userinput==2){
         cout << "[Show Patients]"<< endl;
         cout << "ID     Name          Health Card    Condition     Bed Number    Contraction Rate(per min)   Cervix Dialiation(cm)" << endl;
         cout << "-----------------------------------------------------------------------------------------------------" << endl;

         for (patientnumb=0; patientnumb < i ; patientnumb++){

                 cout << patientnumb+1 << ".     ";
                 my_registry.printinfo (patientnumb, Patientlist[patientnumb]);
                 my_registry.displayqueue(myqueue);
// will print the patient info depending on counter i
// counter i increases each time user entry 1 is entered
         }
}
         if (userinput==3){
                 my_menu.Doctor(examine, Patientlist);
                examine = rand()% 4+1;

             if (examine==1){

             Patientlist[0].cond = "CHECK UP";

             }
             if (examine==2){

             Patientlist[0].cond = "LABOUR";

             }
             if (examine==3){

             Patientlist[0].cond = "RELEASE";

             }
             if (examine==4){

             Patientlist[0].cond = "ADMIT";

             }





                 cout<< Patientlist[patientnumb].cond << endl;

         }

         cout<<endl;
}


}









