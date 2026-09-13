#include<iostream>
using namespace std;

class Academic{
protected:
    float marks;

public:
    void getMarks(){
        cout<<"Enter Academic Marks: ";
        cin>> marks;
    }
};


class Sports{
protected:
    float sportsScore;

public:
    void getSportsScore(){
        cout<<"Enter Sports Score: ";
        cin>> sportsScore;
    }
};


class Result : public Academic, public Sports{
    float totalScore;

public:
    void calculateAndDisplay(){
        totalScore = marks + sportsScore;
        
        cout<<"\n--- Final Result ---"<<endl;
        cout<<"Academic Marks: "<< marks<<endl;
        cout<<"Sports Score: "<< sportsScore<<endl;
        cout<<"Total Score: "<< totalScore<<endl;
    }
};

int main(){
    Result r;
    
    r.getMarks();
    r.getSportsScore();
    r.calculateAndDisplay();

    return 0;
}