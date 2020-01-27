//Talbert Herndon
//Lucky 7 Project
// 1/25/2020

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

void lucky1 () {
    int n1, n2 , n3 , n4 ,n5, largest, smallest ;
    cout << "Please input 5 numbers you want to compare." << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    largest = n1;
    smallest = n1;

    // goes through the numbers the user inputs and
    // makes each value that is greater/smaller than the variable
    // largest/smallest get set to its new value
    if (n1 > largest) {
        largest = n1;
    }
    if (n2 > largest) {
        largest = n2;
    }
    if (n3 > largest) {
        largest = n3;
    }
    if (n4 > largest) {
        largest = n4;
    }
    if (n5 > largest) {
        largest = n5;
    }
    if (n1 < smallest) {
        smallest = n1;
    }
    if (n2 < smallest) {
        smallest = n2;
    }
    if (n3 < smallest) {
        smallest = n3;
    }
    if (n4 < smallest) {
        smallest = n4;
    }
    if (n5 < smallest) {
        smallest = n5;
    }

//prints the largest and smallest
    cout << " Largest number is : " << largest <<  endl;
    cout << " Smallest number is : " << smallest << endl;



}
void lucky2 () {


    int start = 1;
    //setting the multiple for 7
    int multiple = 7;
    cout << "Program that writes the first 50 positive integers that are multiples of 7! ";
    //goes through a loop and multiplies " i " by 7 and i is increasing by 1 every loop.
    for (int i = 1; i <= 7; i++) {
        start = i * multiple;
        cout<< start << endl;
    }
}

void lucky3 () {
    int i,fact=1,number;

    cout << "Enter a Number you would like the factorial of : ";
    cin >> number;
    // makes sure the code doesnt overflow.
    if (number > 16){
        cout << "Please enter a value 1 - 16 for best results!"<< endl;
        cout << "Enter a Number you would like the factorial of.";
        cin >> number;
    }
    if (number <= 16){
        // goes through the factorial equations
    for (i = 1; i <= number; i ++){
        fact = fact*i;
        cout<< fact << endl;
    }
    }
    cout <<"Factorial of: "<< number <<" is " << fact;

}
void lucky4 () {
    //makes an array for the characters
    char string[20];
    int i, length;
    int flag = 0;

    cout << "Enter a Word "; cin >> string;

    length = strlen(string);
    // goes through the first and the last and see if they equal each other ,
    // then goes to the second and the second to last if they equal and so on.
    // and if they don't it ends the program.
    for (i = 0; i < length; i++) {
        if (string[i] != string[length-i-1]){
            // makes a flag if the one letter does not equal
            flag = 1;
            break;
        }
    }
    if (flag) {
        cout << string << " : Your word is NOT a Palindrome" << endl;

    } else {
        cout << string << ": Your word is a Palindrome! " << endl;
    }
}
void lucky5 () {
    int n, i;
    bool isPrime = true;

    cout << "Pick a number to see if it is Prime: ";
    // user inputs a value for prime checking
    cin >> n;

    for (i = 2; i <n / 2; ++i){
        // equation for finding the prime number
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime == false) {
        cout << "Your number is NOT Prime";
    }
    if (isPrime == true) {
        cout << "Your number is Prime";
    }

}
void lucky6 () {
    int n[3];
    float average;

    cout << "Enter first value" << endl;
    cin >> n[1];
    cout << "Enter second value" << endl;
    cin >> n[2];
    cout << "Enter third value" << endl;
    cin >> n[3];
    cout << "Values you Entered can be initialized here: " << endl;
    cout << n;
    average = (n[1]+n[2]+n[3])/ 3.0;
    cout << " Average of the Array: " << average << endl;


}
void lucky7 () {
    // opens a file in the ./cmake-build-debug/example.rtf
    string word;
    ifstream inFile ("example.rtf");
    cerr  << " This program is reading a file and printing the string with the most characters." << endl;


    string largest;
    string smallest;
    int n;
    // when file is open it pushes all the words to an array size of the users choice.
    if (inFile.is_open()) {
        cout << "Please input a number:";
        cin >> n;
        string myArray[n];
        cout << "The full file says,[ " ;
        for(int i = 0; i < n; ++ i) {
            inFile >> myArray[i];
            // compares the size of the words in the array.
            if (myArray[i].length() > largest.length()) {
                largest = myArray[i];
            }
            cout << myArray[i] << " ";


        }


        inFile.close();

    } else {
        cerr << "Error opening file" << endl;
        exit(1);
    }


    cout << "] and your biggest word was... " << largest << endl;



}

//here we just have basic navigation for best user experience.
int main () {
    int choice;

    cout << "Which of the 7 programs would you like to test of Luck7? " << endl;
    cin >> choice ;

    if ( choice == 1) {
        lucky1();
    }
    if (choice == 2) {
        lucky2();
    }
    if (choice == 3) {
        lucky3();
    }

    if (choice == 4) {
        lucky4();
    }
    if (choice == 5) {
        lucky5();
    }
    if (choice == 6) {
        lucky6();
    }
    if (choice == 7) {
        lucky7();
    }

}