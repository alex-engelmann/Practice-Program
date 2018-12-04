#include <iostream>

int main() {
    
    
    using namespace std;

    //Get the dimensions of the rectangle from the user
    
    cout << "Please enter rectangle length: " << endl;
    int l  = 0;
    cin >> l;

    cout << "Please enter rectangle width: " << endl;
    int w = 0;
    cin >> w;

    //Give the user the area and perimeter

    cout << "The area of your rectangle is: " << (l*w) << endl;
    cout << "The perimeter of your rectangle is " << (2*l + 2 * w) << endl;


    //Leave this at the end always
    system("pause");
    return 0;

}