#include <iostream>
#include <fstream>

using namespace std;

int total = 0;
int TopElf1, TopElf2, TopElf3, bigTotal, biggestTotal, temp = 0;
string line;

void Part1(ifstream& file){
    while(getline(file, line))
    {
        if(line == "")
        {
            if(total > biggestTotal)
                biggestTotal = total;
            total = 0;
        }
        else
            total += stoi(line);
    }

    cout<<"Part1: "<<biggestTotal<<endl;
}

void Part2(ifstream& file){
    while(getline(file, line))
    {
        if(line == "")
        {
            if(total > TopElf3)
            {
                TopElf3 = total;
                if(TopElf3 > TopElf2)
                {
                    temp = TopElf2;
                    TopElf2 = TopElf3;
                    TopElf3 = temp;
                    if(TopElf2 > TopElf1)
                    {
                        temp = TopElf1;
                        TopElf1 = TopElf2;
                        TopElf2 = temp;
                    }
                }
            }
            total = 0;
        }
        else
            total += stoi(line);
    }

    bigTotal = TopElf3+TopElf2+TopElf1;
    cout<<"Part2: "<<bigTotal<<endl;
}

int main(int argc, char *argv[]){
    ifstream myFilePart1, myFilePart2;
    myFilePart1.open(argv[1]);
    Part1(myFilePart1);
    myFilePart2.open(argv[1]);
    Part2(myFilePart2);
    return 0;
}