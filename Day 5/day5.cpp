#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

string line;
int numOfMoves, fromStack, toStack, movePos, fromPos, toPos;
vector<char> stack1,stack2,stack3,stack4,stack5,stack6,stack7,stack8,stack9;


void Part1(ifstream& file){
    while(getline(file, line)){
        movePos = line.find(" ");
        numOfMoves = stoi(line.substr(movePos,movePos+1));
        fromPos = line.find(" ", 8);
        fromStack = stoi(line.substr(fromPos,fromPos+1));
        toPos = line.find(" ", 15);
        toStack = stoi(line.substr(toPos,toPos+1));

        for(int i=0;i<numOfMoves;i++)
        {
            if(fromStack == 1)
            {
                char letter = stack1.back();
                if(toStack == 2)
                    stack2.push_back(letter);
                else if(toStack == 3)
                    stack3.push_back(letter);
                else if(toStack == 4)
                    stack4.push_back(letter);
                else if(toStack == 5)
                    stack5.push_back(letter);
                else if(toStack == 6)
                    stack6.push_back(letter);
                else if(toStack == 7)
                    stack7.push_back(letter);
                else if(toStack == 8)
                    stack8.push_back(letter);
                else
                    stack9.push_back(letter);
                stack1.pop_back();
            }
            else if(fromStack == 2)
            {
                char letter = stack2.back();
                if(toStack == 1)
                    stack1.push_back(letter);
                else if(toStack == 3)
                    stack3.push_back(letter);
                else if(toStack == 4)
                    stack4.push_back(letter);
                else if(toStack == 5)
                    stack5.push_back(letter);
                else if(toStack == 6)
                    stack6.push_back(letter);
                else if(toStack == 7)
                    stack7.push_back(letter);
                else if(toStack == 8)
                    stack8.push_back(letter);
                else
                    stack9.push_back(letter);
                stack2.pop_back();
            }
            else if(fromStack == 3)
            {
                char letter = stack3.back();
                if(toStack == 1)
                    stack1.push_back(letter);
                else if(toStack == 2)
                    stack2.push_back(letter);
                else if(toStack == 4)
                    stack4.push_back(letter);
                else if(toStack == 5)
                    stack5.push_back(letter);
                else if(toStack == 6)
                    stack6.push_back(letter);
                else if(toStack == 7)
                    stack7.push_back(letter);
                else if(toStack == 8)
                    stack8.push_back(letter);
                else
                    stack9.push_back(letter);
                stack3.pop_back();
            }
            else if(fromStack == 4)
            {
                char letter = stack4.back();
                if(toStack == 1)
                    stack1.push_back(letter);
                else if(toStack == 2)
                    stack2.push_back(letter);
                else if(toStack == 3)
                    stack3.push_back(letter);
                else if(toStack == 5)
                    stack5.push_back(letter);
                else if(toStack == 6)
                    stack6.push_back(letter);
                else if(toStack == 7)
                    stack7.push_back(letter);
                else if(toStack == 8)
                    stack8.push_back(letter);
                else
                    stack9.push_back(letter);
                stack4.pop_back();
            }
            else if(fromStack == 5)
            {
                char letter = stack5.back();
                if(toStack == 1)
                    stack1.push_back(letter);
                else if(toStack == 2)
                    stack2.push_back(letter);
                else if(toStack == 3)
                    stack3.push_back(letter);
                else if(toStack == 4)
                    stack4.push_back(letter);
                else if(toStack == 6)
                    stack6.push_back(letter);
                else if(toStack == 7)
                    stack7.push_back(letter);
                else if(toStack == 8)
                    stack8.push_back(letter);
                else
                    stack9.push_back(letter);
                stack5.pop_back();
            }
            else if(fromStack == 6)
            {
                char letter = stack6.back();
                if(toStack == 1)
                    stack1.push_back(letter);
                else if(toStack == 2)
                    stack2.push_back(letter);
                else if(toStack == 3)
                    stack3.push_back(letter);
                else if(toStack == 4)
                    stack4.push_back(letter);
                else if(toStack == 5)
                    stack5.push_back(letter);
                else if(toStack == 7)
                    stack7.push_back(letter);
                else if(toStack == 8)
                    stack8.push_back(letter);
                else
                    stack9.push_back(letter);
                stack6.pop_back();
            }
            else if(fromStack == 7)
            {
                char letter = stack7.back();
                if(toStack == 1)
                    stack1.push_back(letter);
                else if(toStack == 2)
                    stack2.push_back(letter);
                else if(toStack == 3)
                    stack3.push_back(letter);
                else if(toStack == 4)
                    stack4.push_back(letter);
                else if(toStack == 5)
                    stack5.push_back(letter);
                else if(toStack == 6)
                    stack6.push_back(letter);
                else if(toStack == 8)
                    stack8.push_back(letter);
                else
                    stack9.push_back(letter);
                stack7.pop_back();
            }
            else if(fromStack == 8)
            {
                char letter = stack8.back();
                if(toStack == 1)
                    stack1.push_back(letter);
                else if(toStack == 2)
                    stack2.push_back(letter);
                else if(toStack == 3)
                    stack3.push_back(letter);
                else if(toStack == 4)
                    stack4.push_back(letter);
                else if(toStack == 5)
                    stack5.push_back(letter);
                else if(toStack == 6)
                    stack6.push_back(letter);
                else if(toStack == 7)
                    stack7.push_back(letter);
                else
                    stack9.push_back(letter);
                stack8.pop_back();
            }
            else
            {
                char letter = stack9.back();
                if(toStack == 1)
                    stack1.push_back(letter);
                else if(toStack == 2)
                    stack2.push_back(letter);
                else if(toStack == 3)
                    stack3.push_back(letter);
                else if(toStack == 4)
                    stack4.push_back(letter);
                else if(toStack == 5)
                    stack5.push_back(letter);
                else if(toStack == 6)
                    stack6.push_back(letter);
                else if(toStack == 7)
                    stack7.push_back(letter);
                else
                    stack8.push_back(letter);
                stack9.pop_back();
            }
        }
    }
    cout<<"Top of each crate: "<<stack1.back()<<stack2.back()<<stack3.back()<<stack4.back()<<stack5.back()<<stack6.back()<<stack7.back()<<stack8.back()<<stack9.back()<<endl;
}

void Part2(ifstream& file){
    while(getline(file, line)){
        movePos = line.find(" ");
        numOfMoves = stoi(line.substr(movePos,movePos+1));
        fromPos = line.find(" ", 8);
        fromStack = stoi(line.substr(fromPos,fromPos+1));
        toPos = line.find(" ", 15);
        toStack = stoi(line.substr(toPos,toPos+1));

        if(fromStack == 1)
        {
            char letters[numOfMoves];
            int temp = numOfMoves;
            for(int i=0;i<numOfMoves;i++)
            {
                letters[i] = stack1[(stack1.size())-(temp)];
                temp--;
            }
            if(toStack == 2)
                for(int i=0;i<numOfMoves;i++)
                    stack2.push_back(letters[i]);
            else if(toStack == 3)
                for(int i=0;i<numOfMoves;i++)
                    stack3.push_back(letters[i]);
            else if(toStack == 4)
                for(int i=0;i<numOfMoves;i++)
                    stack4.push_back(letters[i]);
            else if(toStack == 5)
                for(int i=0;i<numOfMoves;i++)
                    stack5.push_back(letters[i]);
            else if(toStack == 6)
                for(int i=0;i<numOfMoves;i++)
                    stack6.push_back(letters[i]);
            else if(toStack == 7)
                for(int i=0;i<numOfMoves;i++)
                    stack7.push_back(letters[i]);
            else if(toStack == 8)
                for(int i=0;i<numOfMoves;i++)
                    stack8.push_back(letters[i]);
            else
                for(int i=0;i<numOfMoves;i++)
                    stack9.push_back(letters[i]);
            for(int i=0;i<numOfMoves;i++)
                stack1.pop_back();
        }
        else if(fromStack == 2)
        {
            char letters[numOfMoves];
            int temp = numOfMoves;
            for(int i=0;i<numOfMoves;i++)
            {
                letters[i] = stack2[(stack2.size())-(temp)];
                temp--;
            }
            if(toStack == 1)
                for(int i=0;i<numOfMoves;i++)
                    stack1.push_back(letters[i]);
            else if(toStack == 3)
                for(int i=0;i<numOfMoves;i++)
                    stack3.push_back(letters[i]);
            else if(toStack == 4)
                for(int i=0;i<numOfMoves;i++)
                    stack4.push_back(letters[i]);
            else if(toStack == 5)
                for(int i=0;i<numOfMoves;i++)
                    stack5.push_back(letters[i]);
            else if(toStack == 6)
                for(int i=0;i<numOfMoves;i++)
                    stack6.push_back(letters[i]);
            else if(toStack == 7)
                for(int i=0;i<numOfMoves;i++)
                    stack7.push_back(letters[i]);
            else if(toStack == 8)
                for(int i=0;i<numOfMoves;i++)
                    stack8.push_back(letters[i]);
            else
                for(int i=0;i<numOfMoves;i++)
                    stack9.push_back(letters[i]);
            for(int i=0;i<numOfMoves;i++)
                stack2.pop_back();
        }
        else if(fromStack == 3)
        {
            char letters[numOfMoves];
            int temp = numOfMoves;
            for(int i=0;i<numOfMoves;i++)
            {
                letters[i] = stack3[(stack3.size())-(temp)];
                temp--;
            }
            if(toStack == 1)
                for(int i=0;i<numOfMoves;i++)
                    stack1.push_back(letters[i]);
            else if(toStack == 2)
                for(int i=0;i<numOfMoves;i++)
                    stack2.push_back(letters[i]);
            else if(toStack == 4)
                for(int i=0;i<numOfMoves;i++)
                    stack4.push_back(letters[i]);
            else if(toStack == 5)
                for(int i=0;i<numOfMoves;i++)
                    stack5.push_back(letters[i]);
            else if(toStack == 6)
                for(int i=0;i<numOfMoves;i++)
                    stack6.push_back(letters[i]);
            else if(toStack == 7)
                for(int i=0;i<numOfMoves;i++)
                    stack7.push_back(letters[i]);
            else if(toStack == 8)
                for(int i=0;i<numOfMoves;i++)
                    stack8.push_back(letters[i]);
            else
                for(int i=0;i<numOfMoves;i++)
                    stack9.push_back(letters[i]);
            for(int i=0;i<numOfMoves;i++)
                stack3.pop_back();
        }
        else if(fromStack == 4)
        {
            char letters[numOfMoves];
            int temp = numOfMoves;
            for(int i=0;i<numOfMoves;i++)
            {
                letters[i] = stack4[(stack4.size())-(temp)];
                temp--;
            }
            if(toStack == 1)
                for(int i=0;i<numOfMoves;i++)
                    stack1.push_back(letters[i]);
            else if(toStack == 2)
                for(int i=0;i<numOfMoves;i++)
                    stack2.push_back(letters[i]);
            else if(toStack == 3)
                for(int i=0;i<numOfMoves;i++)
                    stack3.push_back(letters[i]);
            else if(toStack == 5)
                for(int i=0;i<numOfMoves;i++)
                    stack5.push_back(letters[i]);
            else if(toStack == 6)
                for(int i=0;i<numOfMoves;i++)
                    stack6.push_back(letters[i]);
            else if(toStack == 7)
                for(int i=0;i<numOfMoves;i++)
                    stack7.push_back(letters[i]);
            else if(toStack == 8)
                for(int i=0;i<numOfMoves;i++)
                    stack8.push_back(letters[i]);
            else
                for(int i=0;i<numOfMoves;i++)
                    stack9.push_back(letters[i]);
            for(int i=0;i<numOfMoves;i++)
                stack4.pop_back();
        }
        else if(fromStack == 5)
        {
            char letters[numOfMoves];
            int temp = numOfMoves;
            for(int i=0;i<numOfMoves;i++)
            {
                letters[i] = stack5[(stack5.size())-(temp)];
                temp--;
            }
            if(toStack == 1)
                for(int i=0;i<numOfMoves;i++)
                    stack1.push_back(letters[i]);
            else if(toStack == 2)
                for(int i=0;i<numOfMoves;i++)
                    stack2.push_back(letters[i]);
            else if(toStack == 3)
                for(int i=0;i<numOfMoves;i++)
                    stack3.push_back(letters[i]);
            else if(toStack == 4)
                for(int i=0;i<numOfMoves;i++)
                    stack4.push_back(letters[i]);
            else if(toStack == 6)
                for(int i=0;i<numOfMoves;i++)
                    stack6.push_back(letters[i]);
            else if(toStack == 7)
                for(int i=0;i<numOfMoves;i++)
                    stack7.push_back(letters[i]);
            else if(toStack == 8)
                for(int i=0;i<numOfMoves;i++)
                    stack8.push_back(letters[i]);
            else
                for(int i=0;i<numOfMoves;i++)
                    stack9.push_back(letters[i]);
            for(int i=0;i<numOfMoves;i++)
                stack5.pop_back();
        }
        else if(fromStack == 6)
        {
            char letters[numOfMoves];
            int temp = numOfMoves;
            for(int i=0;i<numOfMoves;i++)
            {
                letters[i] = stack6[(stack6.size())-(temp)];
                temp--;
            }
            if(toStack == 1)
                for(int i=0;i<numOfMoves;i++)
                    stack1.push_back(letters[i]);
            else if(toStack == 2)
                for(int i=0;i<numOfMoves;i++)
                    stack2.push_back(letters[i]);
            else if(toStack == 3)
                for(int i=0;i<numOfMoves;i++)
                    stack3.push_back(letters[i]);
            else if(toStack == 4)
                for(int i=0;i<numOfMoves;i++)
                    stack4.push_back(letters[i]);
            else if(toStack == 5)
                for(int i=0;i<numOfMoves;i++)
                    stack5.push_back(letters[i]);
            else if(toStack == 7)
                for(int i=0;i<numOfMoves;i++)
                    stack7.push_back(letters[i]);
            else if(toStack == 8)
                for(int i=0;i<numOfMoves;i++)
                    stack8.push_back(letters[i]);
            else
                for(int i=0;i<numOfMoves;i++)
                    stack9.push_back(letters[i]);
            for(int i=0;i<numOfMoves;i++)
                stack6.pop_back();
        }
        else if(fromStack == 7)
        {
            char letters[numOfMoves];
            int temp = numOfMoves;
            for(int i=0;i<numOfMoves;i++)
            {
                letters[i] = stack7[(stack7.size())-(temp)];
                temp--;
            }
            if(toStack == 1)
                for(int i=0;i<numOfMoves;i++)
                    stack1.push_back(letters[i]);
            else if(toStack == 2)
                for(int i=0;i<numOfMoves;i++)
                    stack2.push_back(letters[i]);
            else if(toStack == 3)
                for(int i=0;i<numOfMoves;i++)
                    stack3.push_back(letters[i]);
            else if(toStack == 4)
                for(int i=0;i<numOfMoves;i++)
                    stack4.push_back(letters[i]);
            else if(toStack == 5)
                for(int i=0;i<numOfMoves;i++)
                    stack5.push_back(letters[i]);
            else if(toStack == 6)
                for(int i=0;i<numOfMoves;i++)
                    stack6.push_back(letters[i]);
            else if(toStack == 8)
                for(int i=0;i<numOfMoves;i++)
                    stack8.push_back(letters[i]);
            else
                for(int i=0;i<numOfMoves;i++)
                    stack9.push_back(letters[i]);
            for(int i=0;i<numOfMoves;i++)
                stack7.pop_back();
        }
        else if(fromStack == 8)
        {
            char letters[numOfMoves];
            int temp = numOfMoves;
            for(int i=0;i<numOfMoves;i++)
            {
                letters[i] = stack8[(stack8.size())-(temp)];
                temp--;
            }
            if(toStack == 1)
                for(int i=0;i<numOfMoves;i++)
                    stack1.push_back(letters[i]);
            else if(toStack == 2)
                for(int i=0;i<numOfMoves;i++)
                    stack2.push_back(letters[i]);
            else if(toStack == 3)
                for(int i=0;i<numOfMoves;i++)
                    stack3.push_back(letters[i]);
            else if(toStack == 4)
                for(int i=0;i<numOfMoves;i++)
                    stack4.push_back(letters[i]);
            else if(toStack == 5)
                for(int i=0;i<numOfMoves;i++)
                    stack5.push_back(letters[i]);
            else if(toStack == 6)
                for(int i=0;i<numOfMoves;i++)
                    stack6.push_back(letters[i]);
            else if(toStack == 7)
                for(int i=0;i<numOfMoves;i++)
                    stack7.push_back(letters[i]);
            else
                for(int i=0;i<numOfMoves;i++)
                    stack9.push_back(letters[i]);
            for(int i=0;i<numOfMoves;i++)
                stack8.pop_back();
        }
        else
        {
            char letters[numOfMoves];
            int temp = numOfMoves;
            for(int i=0;i<numOfMoves;i++)
            {
                letters[i] = stack9[(stack9.size())-(temp)];
                temp--;
            }
            if(toStack == 1)
                for(int i=0;i<numOfMoves;i++)
                    stack1.push_back(letters[i]);
            else if(toStack == 2)
                for(int i=0;i<numOfMoves;i++)
                    stack2.push_back(letters[i]);
            else if(toStack == 3)
                for(int i=0;i<numOfMoves;i++)
                    stack3.push_back(letters[i]);
            else if(toStack == 4)
                for(int i=0;i<numOfMoves;i++)
                    stack4.push_back(letters[i]);
            else if(toStack == 5)
                for(int i=0;i<numOfMoves;i++)
                    stack5.push_back(letters[i]);
            else if(toStack == 6)
                for(int i=0;i<numOfMoves;i++)
                    stack6.push_back(letters[i]);
            else if(toStack == 7)
                for(int i=0;i<numOfMoves;i++)
                    stack7.push_back(letters[i]);
            else
                for(int i=0;i<numOfMoves;i++)
                    stack8.push_back(letters[i]);
            for(int i=0;i<numOfMoves;i++)
                stack9.pop_back();
        }
    }
    cout<<"Top of each crate: "<<stack1.back()<<stack2.back()<<stack3.back()<<stack4.back()<<stack5.back()<<stack6.back()<<stack7.back()<<stack8.back()<<stack9.back()<<endl;
}

int main(int argc, char *argv[]){
    stack1 = {'N','D','M','Q','B','P','Z'};
    stack2 = {'C','L','Z','Q','M','D','H','V'};
    stack3 = {'Q','H','R','D','V','F','Z','G'};
    stack4 = {'H','G','D','F','N'};
    stack5 = {'N','F','Q'};
    stack6 = {'D','Q','V','Z','F','B','T'};
    stack7 = {'Q','M','T','Z','D','V','S','H'};
    stack8 = {'M','G','F','P','N','Q'};
    stack9 = {'B','W','R','M'};
    ifstream myFilePart1, myFilePart2;
    myFilePart1.open(argv[1]);
    Part1(myFilePart1);
    myFilePart2.open(argv[1]);
    Part2(myFilePart2);
    return 0;
}