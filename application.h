// Credit Card Validator
#ifndef CCvalidator_H
#define CCvalidator_H
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>


class CCvalidator {
    std::string CC;
    std::string filename;
    public:
    void CCinput();
    void CCinput_Menu();
    bool Validator(std::string CC);
    void PrintMenu();
    void ReadFile();
    void ReadFile_Menu();
    void Exit();
    void SelectMenu();

};
void CCvalidator::CCinput_Menu(){
    int choice;
    printf("\n ______________________________"
           "_________________________________\n");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t 1. Main Menu \t\t\t\t|");
    printf("\n|\t\t\t 2. Exit \t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n\xB2_________________________________"
           "______________________________\xB2\n");
    std::cout<<"Enter you choice : ";
    std::cin>>choice;
    switch (choice)
    {
    case 1:
        PrintMenu();
        break;
    
    case 2:
        exit(1);
        break;
    default:
        system("cls");
        CCinput_Menu();
    }
    
  
}

void CCvalidator::ReadFile_Menu(){
    int choice;
    printf("\n ______________________________"
           "_________________________________\n");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t 1. Main Menu \t\t\t\t|");
    printf("\n|\t\t\t 2. Red another CSV file \t\t|");
    printf("\n|\t\t\t 3. Exit \t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n\xB2_________________________________"
           "______________________________\xB2\n");
    std::cout<<"Enter you choice : ";
    std::cin>>choice;
    switch (choice)
    {
    case 1:
        PrintMenu();
        break;
    
    case 2:
        ReadFile();
        break;
    case 3:
        exit(1);
    default:
        system("cls");
        ReadFile_Menu();
    }
    
  
}

// Luhan Algorithm
bool CCvalidator::Validator(std::string CC)
{
    int CreditCardInt = CC.length();
 
    int nSum = 0, isSecond = false;
    for (int i = CreditCardInt - 1; i >= 0; i--) {
 
        int d = CC[i] - '0';
 
        if (isSecond == true)
            d = d * 2;
        nSum += d / 10;
        nSum += d % 10;
        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}

// Input
void CCvalidator::CCinput()
{
    system("cls");
    int choice;
    std::cout<<"\nEnter Credit Card Number : ";
    std::cin>>CC;
    if(Validator(CC)){
        printf("\xB2 \xB2\xB2\xB2\xB2\xB2\xB2\xB2"
               "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
               "\xB2\xB2 Credit Card is Valid \xB2"
               "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
               "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
               "\xB2\xB2 \xB2");
    }
    else{
        printf("\xB2 \xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2 Credit Card is inValid \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2 \xB2");
    }


    CCinput_Menu();
    switch (choice)
    {
    case 1:
        PrintMenu();
        break;
    
    case 2:
        exit(1);
        break;
    default:
        system("cls");
        CCinput_Menu();
    }



}

//PrintMenu()
void CCvalidator::PrintMenu(){
    // Set output color to blue
    // background and white foreground
    system("cls");
    system("color 1F");
    printf("\n");
  
    // Create Menu
    printf("\xB2 \xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2 Credit Card Validator \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2 \xB2");
    printf("\n ______________________________"
           "_________________________________");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t 1. Enter Credit Card Number \t\t|");
    printf("\n|\t\t\t 2. Red from Text or CSV file \t\t|");
    printf("\n|\t\t\t 3. Exit \t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n\xB2_________________________________"
           "______________________________\xB2\n");
  
    // Function call for select options
    CCvalidator::SelectMenu();
}


//Readfile
void CCvalidator::ReadFile(){
    system("cls");
    std::string FileLocation;
    std::string line;
    std::cout<<"\n";
    std::cout<<"Enter File location : ";
    std::cin>>FileLocation;
    std::ifstream inputfile;
    inputfile.open(FileLocation);
    std::cout<<"SN\t"<<" | "<<"\t"<<"Credit Card Number\t\t"<<" | "<<"Status"<<std::endl;
    while (std::getline(inputfile, line))
    {
        std::string SN;
        std::string CCnumber;

        std::stringstream inputstring(line);
        // parse values
        std::getline(inputstring, SN, ',');
        std::getline(inputstring, CCnumber, ',');
        if(Validator(CCnumber)){
            std::cout<<SN<<"\t"<<" | "<<"\t"<<CCnumber<<"\t\t"<< " | "<<"Valid"<<std::endl;
        }
        else{
            std::cout<<SN<<"\t"<<" | "<<"\t"<<CCnumber<<"\t\t"<< " | "<<"Invalid"<<std::endl;
        }
    }
    ReadFile_Menu();

    
}

// Exit
void CCvalidator::Exit(){
    std::cout<<"Exit function\n";
}

// SlectMenu
void CCvalidator::SelectMenu(){
        int choice;
    printf("\n Enter your choice : ");
    scanf("%d", &choice);
  
    switch (choice) {
    case 1:
        CCinput();
        break;
  
    case 2:
        ReadFile();
        break;
  
    case 3:
  
        printf("\n Exiting... \n\n");
        printf("Exiting in 3 seconds...\n");
        Sleep(3000);
        exit(1);
  
    default:
        printf("\ninvalid choice Try again \n");
        PrintMenu();
    }
}


#endif