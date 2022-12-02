#include <iostream>
#include <fstream>

using namespace std;

string line;

void Part1(ifstream& file){
    
}

void Part2(ifstream& file){
    
}

int main(int argc, char *argv[]){
    ifstream myFilePart1, myFilePart2;
    myFilePart1.open(argv[1]);
    Part1(myFilePart1);
    myFilePart2.open(argv[1]);
    Part2(myFilePart2);
    return 0;
}