#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    // Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
    string book = "dressrosa";
    for (int i :book){
        cout<< "\nAlphabet" << i;
    }

    string names[5] = {"muqoddim","eniola","arotayo","ayomide","opeyemi"};
    for (string i : names){
        cout<< "\nMy name is " << i;
    }
     
    for (int i = 1; i < 6; i++){
        cout << "\n" << i << " = " << names[i];
    }

    string cars[4] = {"toyota","lamborghini","tesla","bugatti"};
    for (string i : cars){
        cout<< "\nThe name of my cars is " << i;
    }
    
    int numbers[5] = {1,2,3,4,5};
    numbers[0] = 7;
    cout<< "\n" << numbers[0];
    cout<< "\n" << cars[2];
    cout<< "\nThe size of numbers array is " << sizeof(numbers) ;

    int actual_length = sizeof(numbers)/sizeof(numbers[0]);
    cout<< "\nThe actual length of the array is " << actual_length;

    string places[2];
    places[0] = "ogbomoso";
    places[1] = "ibadan";


    // In C++, you don't have to specify the size of the array. 
    // The compiler is smart enough to determine the size of the array based on the number of inserted values

    vector<string> objects = {"table","knife","pencil","eraser"};

    objects.push_back("plate"); 
    for (string i : objects){
        cout<< "\nThis is a " << i;
    }


    string our_names[4] = {"muqoddim","fatima","aisha",};
    cout<< our_names[2];
    for (int i = 0; i < 4; i++)
    {
        cout << "\n" << our_names[i] ;
    }
    for (string i : our_names)
    {
        cout<< "\n" << i;
    }
    
    
    vector<string> our_cars = {"maceratti","bugatti"} ;
    our_cars.push_back("ford");
    cout << sizeof(our_cars) ;
    cout << sizeof(our_cars[0]);
    cout << sizeof(our_cars)/sizeof(our_cars[0]);
    // string our_cars[] = {"mustang","camaro","benz","lexus"};
    for (int i = 0; i < sizeof(our_cars)/sizeof(our_cars[0]); i++)
    {
        cout<< "\n" << our_cars[i]  ;
    }

    int ages[] = {23,54,23,67,56,32};

    int average, sum = 0;

    for (int age : ages){
        sum += age;
    }

    average = sum/(sizeof(ages)/sizeof(ages[0]));

    cout<< "\n" << average;
    

    int digits[] = {23,54,23,67,56,32};
    int times = 0;
    for (int digit : digits){
        cout<< "\n";
        for(int num : digits){
            if (digit > num){
                cout<< "\n" << digit << "no";
            } else{
                times += 1;
                cout<< "\n" << digit << "yes";
            }
        }
        if (times == (sizeof(digits)/sizeof(digits[0]))){
            cout << "\n" << digit << "is the least";
        }
    }

    int agess[] = {23,54,23,67,56,32,78,32};
    int lowest_age = agess[0];
    int length = sizeof(agess)/sizeof(agess[0]);
    for( int age : agess){
        if(lowest_age > age){
            lowest_age = age;
        }
    }
    cout << "\nThe lowest age is "<< lowest_age ;


    // MULTI-DIMENSIONAL ARRAY
    // A multi-dimensional array is an array of arrays

    string mult_array[3][2] = {
        {"muqoddim","eniola"},{"arotayo","opeyemi"},{"olaosebikan","omogboriwole"}
    };
    mult_array[1][1] = "meliodas";
    cout<< "\n" << (mult_array[1][1] = "aisha") << "\n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cout << "\n" << "My name is " << mult_array[i][j] ;
        }
        
    }
    
    




    
}