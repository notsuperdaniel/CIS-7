/* 
 * File:   main.cpp
 * Author: Daniel Garcia
 * Created on May 13, 2019, 9:46 PM
 * Purpose:  UCR Program
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <cstdlib> //Random Library
#include <iomanip> //Format Library
#include <ctime>   //Time Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const string eng[5]={"Australia", "Bahamas", "Barbados", "Belize", "Dominica"};
const string span[5]={"Argentina", "Spain", "Mexico", "Bolivia", "Chile"};
const string fre[5]={"Australia", "Bahamas", "Barbados", "Belize", "Dominica"};
const string ger[5]={"Australia", "Bahamas", "Barbados", "Belize", "Dominica"};
const string ara[5]={"Australia", "Bahamas", "Barbados", "Belize", "Dominica"};

/*English Speaking countries:
 * 1)Australia 2)Bahamas 3) Barbados 4)Belize 5)Dominica
 * Spanish Speaking Countries:
 * 1) Argentina 2)Spain 3)Mexico 4)Bolivia 5)Chile
 * French Speaking Countries:
 * 1)Benin 2)Ivory Coast 3)Haiti 4)Monaco 5)Senegal
 * German speaking countries:
 * 1)Austria 2)Switzerland 3)Germany 4)Liechtenstein 
 * Arabic Speaking Countries:
 * 1)Algeria 2)Egypt 3)Iraq 4)Kuwait 5)Lebanon
 * Portuguese Speaking Countries:
 * 1)Brazil 2)Portugal 3)Angola 4)Cape Verde 5)Guinea-Bissau
 */
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char lang, medSpec;//Choose which problem

    //Initialize or input i.e. set variable values
    cout<<"Welcome UCR Graduate!"<<endl;
    cout<<"To get a better understanding of what country to match you "<<endl;
    cout<<"with, we must first ask you a couple questions."<<endl;
    cout<<"============================================================="<<endl;
    cout<<"What language do you speak most fluently? (insert the letter "<<endl;
    cout<<"associated with your answer and then press enter)"<<endl;
    cout<<"(A)----English"<<endl;
    cout<<"(B)----Spanish"<<endl;
    cout<<"(C)----French"<<endl;
    cout<<"(D)----German"<<endl;
    cout<<"(E)----Arabic"<<endl;
    cout<<"(F)----Portuguese"<<endl;
            
    cin>>lang;
    
    //Solve Problems
    switch(lang){
        case 'A':
        case 'a': {
                    

                    //Declare all Variables Here
                    

                    //Input or initialize values Here
                    

                    //Process/Calculations Here
                    

                    //Output Located Here
            cout<<"============================================================="<<endl;
            cout<<"You selected English"<<endl;
            cout<<"What medical field do you most consider yourself "<<endl;
            cout<<"specialized in?"<<endl;
            cout<<"(A)----Anesthesiology"<<endl;
            cout<<"(B)----Dermatology"<<endl;
            cout<<"(C)----Geriatrics"<<endl;
            cout<<"(D)----Neurology"<<endl;
            cout<<"(E)----Pediatrics"<<endl;
            cin>>medSpec;
            break;
               }/*
        case '2':{
            

                    break;
               }
        case '3':{
                    //Declare Variables
                    float   wD,//Weight in lbs of the dieter
                            ms,//Mass of sweetener that killed mouse in grams
                            mm,//Mass of mouse in grams
                            msp,//Mass of soda pop in grams
                            csp;//Soda pop concentration
                    int nCans;//Number of cans 

                    //Initialize or input i.e. set variable values
                    ms=5;     //5 grams that kill the mouse
                    mm=35;    //35 grams mass of mouse
                    msp=350;  //350 grams in a soda pop can
                    csp=.001f;//1/10 of 1%
                    cout<<"Program to calculate limit of Soda Pop Consumption"<<endl;
                    cout<<"Input the desired dieters weight in lbs"<<endl;
                    cin>>wD;

                    //Map inputs -> outputs
                    //nCans=wD*CNVLBGR*ms/mm/msp/csp;
                    nCans=wD*CNVLBGR*ms/(mm*msp*csp);

                    //Display the outputs
                    cout<<"The maximum number of soda pop cans"<<endl;
                    cout<<"which can be consumed are = "<<nCans<<endl;

                    break;
               }*/
    }
    switch(medSpec){
        case 'a':
        case 'A':{
            unsigned short num;
            srand(static_cast<unsigned int>(time(0)));
            cout<<"You picked Anesthesiology"<<endl;
           
            num=rand()%5+1;
            cout<<eng[num];
           // cout<<"You will be assigned to "<<eng;
            break;
        }
               
        default:    cout<<"That was not a choice."<<endl;
    }
    //Exit stage right or left!
    return 0;
}