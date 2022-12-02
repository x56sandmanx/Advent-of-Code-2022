#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){
    ifstream myFile(argv[1]);
    int total = 0;
    int TopElf1, TopElf2, TopElf3, bigTotal, temp = 0;
    string line;

    while(getline(myFile, line))
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

    cout<<"The Top 3 Elves were: "<<TopElf3<< " "<<TopElf2<<" "<<TopElf1<<endl;
    bigTotal = TopElf3+TopElf2+TopElf1;
    cout<<"All 3 elves added together: "<<bigTotal<<endl;
    return 0;
}