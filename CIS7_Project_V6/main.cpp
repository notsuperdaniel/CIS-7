/* 
 * File:   main.cpp
 * Author: Daniel Garcia
 * Created on May 16, 2019, 11:00 AM
 * Purpose:  UCR Program V6
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <cstdlib> //Random Library
#include <ctime>   //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const string eng[5]={"Australia", "Bahamas", "Barbados", "Belize", "Dominica"};
const string spa[5]={"Argentina", "Spain", "Mexico", "Bolivia", "Chile"};
const string fre[5]={"Benin", "Ivory Coast", "Haiti", "Monaco", "Senegal"};
const string ger[4]={"Austria", "Switzerland", "Germany", "Liechtenstein "};
const string ara[5]={"Algeria", "Egypt", "Iraq", "Kuwait", "Lebanon"};
const string por[5]={"Brazil", "Portugal", "Angola", "Cape Verde", "Guinea-Bissau"};

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

 //Function Prototypes Here
char options(char &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char lang, medSpec, place;

    
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
  
                    //Output Located Here
            cout<<"============================================================="<<endl;
            cout<<"You selected English."<<endl;
            cout<<"What medical field do you consider yourself most specialized in?"<<endl;
            cout<<"(A)----Anesthesiology"<<endl;
            cout<<"(B)----Dermatology"<<endl;
            cout<<"(C)----Geriatrics"<<endl;
            cout<<"(D)----Neurology"<<endl;
            cout<<"(E)----Pediatrics"<<endl;
            cin>>medSpec;
            break;
               }
        case 'B':
        case 'b': {
  
                    //Output Located Here
            cout<<"============================================================="<<endl;
            cout<<"You selected Spanish."<<endl;
            cout<<"What medical field do you consider yourself most specialized in?"<<endl;
            cout<<"(A)----Anesthesiology"<<endl;
            cout<<"(B)----Dermatology"<<endl;
            cout<<"(C)----Geriatrics"<<endl;
            cout<<"(D)----Neurology"<<endl;
            cout<<"(E)----Pediatrics"<<endl;
            cin>>medSpec;
            break;
               }
        case 'C':
        case 'c': {
  
                    //Output Located Here
            cout<<"============================================================="<<endl;
            cout<<"You selected French."<<endl;
           cout<<"What medical field do you consider yourself most specialized in?"<<endl;
            cout<<"(A)----Anesthesiology"<<endl;
            cout<<"(B)----Dermatology"<<endl;
            cout<<"(C)----Geriatrics"<<endl;
            cout<<"(D)----Neurology"<<endl;
            cout<<"(E)----Pediatrics"<<endl;
            cin>>medSpec;
            break;
               }
        case 'D':
        case 'd': {
  
                    //Output Located Here
            cout<<"============================================================="<<endl;
            cout<<"You selected German."<<endl;
            cout<<"What medical field do you consider yourself most specialized in?"<<endl;
            cout<<"(A)----Anesthesiology"<<endl;
            cout<<"(B)----Dermatology"<<endl;
            cout<<"(C)----Geriatrics"<<endl;
            cout<<"(D)----Neurology"<<endl;
            cout<<"(E)----Pediatrics"<<endl;
            cin>>medSpec;
            break;
               }
        case 'E':
        case 'e': {
  
                    //Output Located Here
            cout<<"============================================================="<<endl;
            cout<<"You selected Arabic."<<endl;
           cout<<"What medical field do you consider yourself most specialized in?"<<endl;
            cout<<"(A)----Anesthesiology"<<endl;
            cout<<"(B)----Dermatology"<<endl;
            cout<<"(C)----Geriatrics"<<endl;
            cout<<"(D)----Neurology"<<endl;
            cout<<"(E)----Pediatrics"<<endl;
            cin>>medSpec;
            break;
               }
        case 'F':
        case 'f': {
  
                    //Output Located Here
            cout<<"============================================================="<<endl;
            cout<<"You selected Portuguese."<<endl;
           cout<<"What medical field do you consider yourself most specialized in?"<<endl;
            cout<<"(A)----Anesthesiology"<<endl;
            cout<<"(B)----Dermatology"<<endl;
            cout<<"(C)----Geriatrics"<<endl;
            cout<<"(D)----Neurology"<<endl;
            cout<<"(E)----Pediatrics"<<endl;
            cin>>medSpec;
            break;
               }
      
    }
    switch(medSpec){
        case 'A':
        case 'a':{
            cout<<"============================================================="<<endl;
            cout<<"You picked Anesthesiology."<<endl;
            
            cout<<"You can pick between: "<<endl;
            if(lang=='A'|| lang=='a'){
                cout<<"(A)---- "<<eng[0]<<endl<<"(B)---- "<<eng[1]<<endl;
                cin>>place;
                cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<eng[0]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<eng[1]<<endl;
            };
              if(lang=='B'|| lang=='b'){
                cout<<"(A)---- "<<spa[0]<<endl<<"(B)---- "<<spa[1]<<endl;
                cin>>place;
                cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<spa[0]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<spa[1]<<endl;
              };
              if(lang=='C'|| lang=='c'){
                cout<<"(A)---- "<<fre[0]<<endl<<"(B)---- "<<fre[1]<<endl;
                cin>>place;
                cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<fre[0]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<fre[1]<<endl;
              };
              if(lang=='D'|| lang=='d'){
                cout<<"(A)---- "<<ger[0]<<endl<<"(B)---- "<<ger[1]<<endl;
                cin>>place;
                cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<ger[0]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<ger[1]<<endl;
              };
              if(lang=='E'|| lang=='e'){
                cout<<"(A)---- "<<ara[0]<<endl<<"(B)---- "<<ara[1]<<endl;
                cin>>place;
                cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<ara[0]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<ara[1]<<endl;
              };
              if(lang=='F'|| lang=='f'){
                cout<<"(A)---- "<<por[0]<<endl<<"(B)---- "<<por[1]<<endl;
                cin>>place;
                cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<por[0]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<por[1]<<endl;
              };
            
            //cout<<"You will be assigned to "<< eng[num] <<".";
           // cout<<"You will be assigned to "<<eng;
            break;
        }
        case 'B':
        case 'b':{
            cout<<"============================================================="<<endl;
            cout<<"You picked Dermatology."<<endl;
            cout<<"You can pick between: "<<endl;
           
            if(lang=='A'|| lang=='a'){
                cout<<"(A)---- "<<eng[1]<<endl<<"(B)---- "<<eng[2]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<eng[1]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<eng[2]<<endl;
            };
              if(lang=='B'|| lang=='b'){
                cout<<"(A)---- "<<spa[1]<<endl<<"(B)---- "<<spa[2]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<spa[1]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<spa[2]<<endl;
              };
              if(lang=='C'|| lang=='c'){
                cout<<"(A)---- "<<fre[1]<<endl<<"(B)---- "<<fre[2]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<fre[1]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<fre[2]<<endl;
              };
              if(lang=='D'|| lang=='d'){
                cout<<"(A)---- "<<ger[1]<<endl<<"(B)---- "<<ger[2]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<ger[1]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<ger[2]<<endl;
              };
              if(lang=='E'|| lang=='e'){
                cout<<"(A)---- "<<ara[1]<<endl<<"(B)---- "<<ara[2]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<ara[1]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<ara[2]<<endl;
              };
              if(lang=='F'|| lang=='f'){
                cout<<"(A)---- "<<por[1]<<endl<<"(B)---- "<<por[2]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<por[1]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<por[2]<<endl;
              };
           
           
            break;
        }
        case 'C':
        case 'c':{
            cout<<"============================================================="<<endl;
            cout<<"You picked Geriatrics."<<endl;
            cout<<"You can pick between: "<<endl;
            if(lang=='A'|| lang=='a'){
                cout<<"(A)---- "<<eng[2]<<endl<<"(B)---- "<<eng[3]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<eng[2]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<eng[3]<<endl;
                
            };
              if(lang=='B'|| lang=='b'){
                cout<<"(A)---- "<<spa[2]<<endl<<"(B)---- "<<spa[3]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<spa[2]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<spa[3]<<endl;
              };
              if(lang=='C'|| lang=='c'){
                cout<<"(A)---- "<<fre[2]<<endl<<"(B)---- "<<fre[3]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<fre[2]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<fre[3]<<endl;
              };
              if(lang=='D'|| lang=='d'){
                cout<<"(A)---- "<<ger[2]<<endl<<"(B)---- "<<ger[3]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<ger[2]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<ger[3]<<endl;
              };
              if(lang=='E'|| lang=='e'){
                cout<<"(A)---- "<<ara[2]<<endl<<"(B)---- "<<ara[3]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<ara[2]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<ara[3]<<endl;
              };
              if(lang=='F'|| lang=='f'){
                cout<<"(A)---- "<<por[2]<<endl<<"(B)---- "<<por[3]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<por[2]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<por[3]<<endl;
              };
            break;
        }   
        case 'D':
        case 'd':{
            cout<<"============================================================="<<endl;
            cout<<"You picked Neurology."<<endl;
            cout<<"You can pick between: "<<endl;
            if(lang=='A'|| lang=='a'){
                cout<<"(A)---- "<<eng[3]<<endl<<"(B)---- "<<eng[4]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<eng[3]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<eng[4]<<endl;
            };
              if(lang=='B'|| lang=='b'){
                cout<<"(A)---- "<<spa[3]<<endl<<"(B)---- "<<spa[4]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<spa[3]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<spa[4]<<endl;
              };
              if(lang=='C'|| lang=='c'){
                cout<<"(A)---- "<<fre[3]<<endl<<"(B)---- "<<fre[4]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<fre[3]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<fre[4]<<endl;
              };
              if(lang=='D'|| lang=='d'){
                cout<<"(A)---- "<<ger[0]<<endl<<"(B)---- "<<ger[3]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<ger[0]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<ger[3]<<endl;
              };
              if(lang=='E'|| lang=='e'){
                cout<<"(A)---- "<<ara[3]<<endl<<"(B)---- "<<ara[4]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<ara[3]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<ara[4]<<endl;
              };
              if(lang=='F'|| lang=='f'){
                cout<<"(A)---- "<<por[3]<<endl<<"(B)---- "<<por[4]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<por[3]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<por[4]<<endl;
              };
            break;
        }  
        case 'E':
        case 'e':{
            cout<<"============================================================="<<endl;
            cout<<"You picked Pediatrics."<<endl;
            cout<<"You can pick between: "<<endl;
            if(lang=='A'|| lang=='a'){
                cout<<"(A)---- "<<eng[4]<<endl<<"(B)---- "<<eng[0]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<eng[4]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<eng[0]<<endl;
            };
              if(lang=='B'|| lang=='b'){
                cout<<"(A)---- "<<spa[4]<<endl<<"(B)---- "<<spa[0]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<spa[4]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<spa[0]<<endl;
              };
              if(lang=='C'|| lang=='c'){
                cout<<"(A)---- "<<fre[4]<<endl<<"(B)---- "<<fre[0]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<fre[4]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<fre[0]<<endl;
              };
              if(lang=='D'|| lang=='d'){
                cout<<"(A)---- "<<ger[0]<<endl<<"(B)---- "<<ger[2]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<ger[0]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<ger[2]<<endl;
              };
              if(lang=='E'|| lang=='e'){
                cout<<"(A)---- "<<ara[4]<<endl<<"(B)---- "<<ara[0]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<ara[4]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<ara[0]<<endl;
              };
              if(lang=='F'|| lang=='f'){
                cout<<"(A)---- "<<por[4]<<endl<<"(B)---- "<<por[0]<<endl;
                    cin>>place;
                    cout<<"============================================================="<<endl;
                cout<<"You have been assigned to: ";
                    if(place=='A'|| place=='a')
                    cout<<por[4]<<endl;
                    else if(place=='B'|| place=='b')
                            cout<<por[0]<<endl;
              };
            break;
        }  
        
        default:    cout<<"That was not a choice."<<endl;
    }
    return 0;
}
