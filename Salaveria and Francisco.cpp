#include <iostream.h>
#include <conio.h> 
 
 
main() {
    char lrn[13], firstName[16], midInitial[2], lastName[16], track[11], strand[6];
    int gradeLevel, age;
    char section[11], sexCode[7], adviser[21];
    float filQtr1, filQtr2, compQtr1, compQtr2, UCSPQtr1, UCSPQtr2, GenmathQtr1, GenmathQtr2, OralcomQtr1, OralcomQtr2, PerdevQtr1, PerdevQtr2, HopeQtr1, HopeQtr2, ScienceQtr1, ScienceQtr2, Comp2Qtr1, Comp2Qtr2, genAvg;
    float avgfil, avgcomp, avgucsp, avggenmath, avgoralcom, avgperdev, avghope, avgscience, avgcomprog2;
    clrscr();
    
    cout << "<<Report Card Data Entry>>" << endl;
    cout << "Enter the following information:" << endl;
 
    cout << "LRN No.: "; cin >> lrn;
    cout << "First Name: "; cin >> firstName;
    cout << "Middle Initial: "; cin >> midInitial;
    cout << "Last Name: "; cin >> lastName;
    cout << "Track: "; cin >> track;
    cout << "Strand: "; cin >> strand;
    cout << "Grade Level: "; cin >> gradeLevel;
    cout << "Section: "; cin >> section;
    cout << "Sex Code: "; cin >> sexCode;
    cout << "Age: "; cin >> age;
    cout << "Name of Adviser: "; cin >> adviser;  
    cout << "Press any key to continue.....";
    getch();
    clrscr();
    
    cout << "\nEnter the grades for the following subjects per quarter:" << endl;
 
    cout << "Filipino Grade Qtr1: "; cin >> filQtr1;
    cout << "Filipino Grade Qtr2: "; cin >> filQtr2;
 
    cout << "CompProg Grade Qtr1: "; cin >> compQtr1;
    cout << "CompProg Grade Qtr2: "; cin >> compQtr2;
    
    cout << "CompProg2 Grade Qtr1: "; cin >> Comp2Qtr1;
    cout << "CompProg2 Grade Qtr2: "; cin >> Comp2Qtr2;
    
    cout << "UCSP Grade Qtr1: "; cin >> UCSPQtr1;
    cout << "UCSP Grade Qtr2: "; cin >> UCSPQtr2;
    
    cout << "Genmath Grade Qtr1: "; cin >> GenmathQtr1;
    cout << "Genmath Grade Qtr2: "; cin >> GenmathQtr2;
    
    cout << "OralCom Grade Qtr1: "; cin >> OralcomQtr1;
    cout << "OralCom Grade Qtr2: "; cin >> OralcomQtr2;
    
    cout << "Perdev Grade Qtr1: "; cin >> PerdevQtr1;
    cout << "Perdev Grade Qtr2: "; cin >> PerdevQtr2;
    
    cout << "HOPE Grade Qtr1: "; cin >> HopeQtr1;
    cout << "HOPE Grade Qtr2: "; cin >> HopeQtr2;
    
    cout << "Science Grade Qtr1: "; cin >> ScienceQtr1;
    cout << "Science Grade Qtr2: "; cin >> ScienceQtr2;
    
    clrscr();

    avgfil = (filQtr1 + filQtr2) / 2;
    avgcomp = (compQtr1 + compQtr2) / 2;
    avgucsp = (UCSPQtr1 + UCSPQtr2) / 2;
    avggenmath = (GenmathQtr1 + GenmathQtr2) / 2;
    avgoralcom = (OralcomQtr1 + OralcomQtr2) / 2;
    avgperdev = (PerdevQtr1 + PerdevQtr2) / 2;
    avghope = (HopeQtr1 + HopeQtr2) / 2;
    avgscience = (ScienceQtr1 + ScienceQtr2) /2;
    avgcomprog2 = (Comp2Qtr1 + Comp2Qtr2) /2;
    genAvg = (avgfil + avgucsp + avgcomp + avggenmath + avgoralcom + avgperdev + avghope + avgscience + avgcomprog2) / 7;
 
    
    cout << "\n<<Report Card>>" << endl;
    cout << "LRN No.: " << lrn << endl;
    cout << "Name: " << firstName << " " << midInitial << ". " << lastName << endl;
    cout << "Track & Strand: " << track << "-" << strand << endl;
    cout << "Grade Level & Sec: " << gradeLevel << "-" << section << endl;
    cout << "Sex: " << sexCode << endl;
    cout << "Age: " << age << endl;
 
    
    cout << "\nSubjects         First Quarter  Second Quarter  Average   Remarks" << endl;
    cout << "Filipino         " << filQtr1 << "             " << filQtr2 << "              " << avgfil;
    if(avgfil >= 75){
        cout<<"        PASSED" << endl;
        } else{
        cout<<"        FAILED" << endl;
        }
    cout << "CompProg         " << compQtr1 << "             " << compQtr2 << "              " << avgcomp;
    if(avgcomp >= 75){
        cout<<"        PASSED" << endl;
        } else{
        cout<<"        FAILED" << endl;
        }
    cout << "CompProg2        " << Comp2Qtr1 << "             " << Comp2Qtr2 << "              " << avgcomprog2;
    if(avgcomprog2 >= 75){
        cout<<"        PASSED" << endl;
        } else{
        cout<<"        FAILED" << endl;
        }
    cout << "UCSP             " << UCSPQtr1 << "             " << UCSPQtr2 << "              " << avgucsp;
    if(avgucsp >= 75){
        cout<<"        PASSED" << endl;
        } else{
        cout<<"        FAILED" << endl;
        }
    cout << "Genmath          " << GenmathQtr1 << "             " << GenmathQtr2 << "              " << avggenmath;
    if(avggenmath >= 75){
        cout<<"        PASSED" << endl;
        } else{
        cout<<"        FAILED" << endl;
        }
    cout << "Perdev           " << PerdevQtr1 << "             " << PerdevQtr2 << "              " << avgperdev;
    if(avgperdev >= 75){
        cout<<"        PASSED" << endl;
        } else{
        cout<<"        FAILED" << endl;
        }
    cout << "Oralcom          " << OralcomQtr1 << "             " << OralcomQtr2 << "              " << avgoralcom;
    if(avgoralcom >= 75){
        cout<<"        PASSED" << endl;
        } else{
        cout<<"        FAILED" << endl;
        }
    cout << "Hope             " << HopeQtr1 << "             " << HopeQtr2 << "              " << avghope;
    if(avghope >= 75){
        cout<<"        PASSED" << endl;
        } else{
        cout<<"        FAILED" << endl;
        }
    cout << "Science          " << ScienceQtr1 << "             " << ScienceQtr2 << "              " << avgscience;
    if(avgscience >= 75){
        cout<<"        PASSED" << endl;
        } else{
        cout<<"        FAILED" << endl;
        }
    
    cout << "\nGeneral Average: " << genAvg << endl;
    cout << "Adviser: " << adviser << endl;
 
    return 0;
}
