#include <iostream>
#include <fstream>

using namespace std;

string line;
char myPick, compPick;
int rock = 1, paper = 2, sissors = 3, score = 0;

void Part1(ifstream& file){
    score = 0;
    while(getline(file, line)){
        compPick = line[0];
        myPick = line[2];

        if(compPick == 'A')
        {
            if(myPick == 'X')
                score += 4;
            else if(myPick == 'Y')
                score += 8;
            else
                score += 3;
        }
        else if(compPick == 'B')
        {
            if(myPick == 'X')
                score += 1;
            else if(myPick == 'Y')
                score += 5;
            else
                score += 9;
        }
        else
        {
            if(myPick == 'X')
                score += 7;
            else if(myPick == 'Y')
                score += 2;
            else
                score += 6;
        }
    }
    cout<<"Part 1: "<<score<<endl;
}

void Part2(ifstream& file){
    score = 0;
    while(getline(file, line)){
        compPick = line[0];
        myPick = line[2];

        if(compPick == 'A')
        {
            if(myPick == 'X')
                score += 3;
            else if(myPick == 'Y')
                score += 4;
            else
                score += 8;
        }
        else if(compPick == 'B')
        {
            if(myPick == 'X')
                score += 1;
            else if(myPick == 'Y')
                score += 5;
            else
                score += 9;
        }
        else
        {
            if(myPick == 'X')
                score += 2;
            else if(myPick == 'Y')
                score += 6;
            else
                score += 7;
        }
    }
    cout<<"Part 2: "<<score<<endl;
}

int main(int argc, char *argv[]){
    ifstream myFilePart1, myFilePart2;
    myFilePart1.open(argv[1]);
    Part1(myFilePart1);
    myFilePart2.open(argv[1]);
    Part2(myFilePart2);
    return 0;
}