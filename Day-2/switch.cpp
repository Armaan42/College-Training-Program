#include<iostream>
using namespace std;

const int pen {10};
const int marker {20};
const int eraser {30};
const int rectangle {40};
const int circle {50};
const int ellipse {60};

int main(){
    int tool {eraser};
    switch(tool){
        case pen:{
            cout << "Active tool is pen" << endl;
        }break;

        case marker:{
            cout << "ACtive tool is marker" << endl;
        }break;

        //if(tool == eraser || tool == rectangle || tool == circle){
        //cout << "Drawing shapes" << endl;
        //}

        case eraser:
        case rectangle:
        case circle : {
            cout << "Drawing shapes" << endl;
        }break;

        case ellipse : {
            
        }
    }
    
}