#include <iostream>
#include <fstream>

using namespace std;

string line;
int total = 0;

void Part1(ifstream& file){
    total = 0;
    while(getline(file, line)){
        int pos = line.find(",");
        string firstPair = line.substr(0,pos);
        string secondPair = line.substr(pos+1,line.length());
        int posNum1 = firstPair.find("-");
        int posNum2 = secondPair.find("-");

        int firstPairFirstNum = stoi(firstPair.substr(0,posNum1));
        int firstPairSecondNum = stoi(firstPair.substr(posNum1+1,firstPair.length()));
        int secondPairFirstNum = stoi(secondPair.substr(0,posNum2));
        int secondPairSecondNum = stoi(secondPair.substr(posNum2+1,secondPair.length()));

        if(firstPairFirstNum <= secondPairFirstNum && firstPairSecondNum >= secondPairSecondNum ||
           firstPairFirstNum >= secondPairFirstNum && firstPairSecondNum <= secondPairSecondNum)
        {
            total += 1;
        }
    }
    cout<<"Number of total pairs: "<<total<<endl;
}

void Part2(ifstream& file){
    total = 0;
    while(getline(file, line)){
        int pos = line.find(",");
        string firstPair = line.substr(0,pos);
        string secondPair = line.substr(pos+1,line.length());
        int posNum1 = firstPair.find("-");
        int posNum2 = secondPair.find("-");

        int firstPairFirstNum = stoi(firstPair.substr(0,posNum1));
        int firstPairSecondNum = stoi(firstPair.substr(posNum1+1,firstPair.length()));
        int secondPairFirstNum = stoi(secondPair.substr(0,posNum2));
        int secondPairSecondNum = stoi(secondPair.substr(posNum2+1,secondPair.length()));

        if(firstPairSecondNum >= secondPairFirstNum && firstPairFirstNum <= secondPairSecondNum)
        {
            total += 1;
        }
    }
    cout<<"Number of total pairs: "<<total<<endl;
}

int main(int argc, char *argv[]){
    ifstream myFilePart1, myFilePart2;
    myFilePart1.open(argv[1]);
    Part1(myFilePart1);
    myFilePart2.open(argv[1]);
    Part2(myFilePart2);
    return 0;
}