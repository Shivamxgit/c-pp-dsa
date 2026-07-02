#include <iostream>
using namespace std;
int main (){
    float pen , pencil , eraser;
    cout << "enter prices of items = "<< endl;
    cin>>pen>>pencil>>eraser;
    float total_cost= pen+pencil+eraser;
    float gst = 0.18 * total_cost;
    float up_cost = total_cost + gst;
    cout <<"the cost including gst is = "<< up_cost << endl;
    return 0;


}