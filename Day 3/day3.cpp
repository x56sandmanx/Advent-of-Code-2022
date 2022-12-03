#include <iostream>
#include <fstream>
#include <map>
#include <vector>

using namespace std;

map<char, int> values;
string line;
int sum = 0, count = 0;
vector<string> groups;


void Part1(ifstream& file){
    sum = 0;
    while(getline(file, line)){
        string firstSack = line.substr(0, line.length()/2);
        string secondSack = line.substr(line.length()/2,line.length());
        for(int i=0;i<firstSack.length();i++)
        {
            for(int j=0;j<secondSack.length();j++)
            {
                if(firstSack[i] == secondSack[j])
                {
                    if(isupper(firstSack[i]))
                    {
                        for(auto itr = values.begin(); itr != values.end(); itr++)
                        {
                            if(itr->first == tolower(firstSack[i]))
                            {
                                sum += itr->second + 26;
                                i = firstSack.length();
                                j = secondSack.length();
                            }
                        }
                    }
                    else
                    {
                        for(auto itr = values.begin(); itr != values.end(); itr++)
                        {
                            if(itr->first == firstSack[i])
                            {
                                sum += itr->second;
                                i = firstSack.length();
                                j = secondSack.length();
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<"Total Sum: "<<sum<<endl;
}

void Part2(ifstream& file){
    sum = 0;
    while(getline(file,line))
    {
        groups.push_back(line);
        count++;
        if(count == 3)
        {
            string firstGroupFirstLine = groups[0],firstGroupSecondLine = groups[1],firstGroupThirdLine = groups[2];

            for(int i=0;i<firstGroupFirstLine.length();i++)
            {
                for(int j=0;j<firstGroupSecondLine.length();j++)
                {
                    for(int k=0;k<firstGroupThirdLine.length();k++)
                    {
                        if(firstGroupFirstLine[i] == firstGroupSecondLine[j] && firstGroupSecondLine[j] == firstGroupThirdLine[k])
                        {
                            if(isupper(firstGroupFirstLine[i]))
                            {
                                for(auto itr = values.begin(); itr != values.end(); itr++)
                                {
                                    if(itr->first == tolower(firstGroupFirstLine[i]))
                                    {
                                        sum += itr->second + 26;
                                        i = firstGroupFirstLine.length();
                                        j = firstGroupSecondLine.length();
                                        k = firstGroupThirdLine.length();
                                        count = 0;
                                        groups.clear();
                                    }
                                }
                            }
                            else
                            {
                                for(auto itr = values.begin(); itr != values.end(); itr++)
                                {
                                    if(itr->first == firstGroupFirstLine[i])
                                    {
                                        sum += itr->second;
                                        i = firstGroupFirstLine.length();
                                        j = firstGroupSecondLine.length();
                                        j = firstGroupThirdLine.length();
                                        count = 0;
                                        groups.clear();
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout <<"Sum of Groups: "<<sum<<endl;
}


int main(int argc, char *argv[]){
    values['a'] = 1,values['b'] = 2,values['c'] = 3,values['d'] = 4,values['e'] = 5,values['f'] = 6,values['g'] = 7,values['h'] = 8,values['i'] = 9,values['j'] = 10,
    values['k'] = 11,values['l'] = 12,values['m'] = 13,values['n'] = 14,values['o'] = 15,values['p'] = 16,values['q'] = 17,values['r'] = 18,values['s'] = 19,values['t'] = 20,
    values['u'] = 21,values['v'] = 22,values['w'] = 23,values['x'] = 24,values['y'] = 25,values['z'] = 26;
    ifstream myFilePart1, myFilePart2;
    myFilePart1.open(argv[1]);
    Part1(myFilePart1);
    myFilePart2.open(argv[1]);
    Part2(myFilePart2);
    return 0;
}