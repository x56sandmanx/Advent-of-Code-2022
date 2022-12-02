#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){
    string line;
    char myPick, compPick;
    int rock = 1, paper = 2, sissors = 3, score = 0;
    ifstream myFile(argv[1]);

    while(getline(myFile, line)){
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
    cout<<score<<endl;
    return 0;
}