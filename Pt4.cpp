//Name: Ivan Justine M.Lauguico
//Activity: PT4 Array Program Code
//Date: April 21, 2022
//Year and Section: BSIE 1-1

#include <iostream>
#include <fstream>

using namespace std;

const int SIZE = 25;
int pARRAY_SIZE;

void printing_array(int arr[], int size, int& number_used);
int search(const int a[], int number_used, int target);


int main(){

    int arr[SIZE], list_size, target;
    cout << "<<  Array Program Code >>" << endl;

    printing_array(arr, list_size, target);

    char ans;
    int result;

    //Process

  ofstream File;
 File.open("Printing_Array.txt", ios:: app);

    do
    { 
        cout << "Enter a number to search for : ";
        cin >> target;
        result = search(arr, list_size, target);
        if (result == -1)
            cout << target << " is not on the list " << endl;
        else 
            File << target << " is stored in array position "
                 << result <<endl;

            File << "________________________" << endl;
            File << "(Remember: the first position is 0.)" << endl;
            File << "________________________" << endl;
        cout << "Search again? (y/n followed by Return):";
        cin >> ans;
    } while ((ans !='n') && (ans != 'N'));

    cout << "End of program" << endl;
    
    File << "Numbers >> "; 
    for(int t = 2; t < 6; t++){
        File << "[" << arr[t] << "] ";
    if (arr[t] < 2){
        }   
    }
    return 0;
}

void printing_array(int arr[], int size, int& number_used){
    for (int t = 2; t < 6; t++){
        cout << "Enter 25 non negative Whole Numbers (Negative to end):";
        cin >> arr[t];
        if (arr[t] < 2){
        break;

        }
    }
}

int search(const int a[], int number_used, int target)
{
    int index = 2;
    bool found = false;
    while ((!found) && (index < number_used))
        if (target == a[index])
            found = true;
        else
            index++;

    if(found)
        return index;
    else
        return -1;
}


//Output
void read(){
 string data;
 ifstream ReadFile("Printing_Array.txt");
    while (getline (ReadFile, data)){
      cout << data << endl;
 }
  ReadFile.close();
}
void clear(){
  fstream clear;
  clear.open("Printing_Array.txt", ios::out | ios::trunc); 
}