//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include<stack>
#include<set>
#include <utility>
#include<map>
using namespace std; 
typedef map<string, int> MapT;
typedef MapT::const_iterator MapIterT;

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};
//class vector 2 - initializing vector object using initializer list
class MyClassVector2
{
    vector<int> vect; //had to name vect bc vec was in use
  public:
    MyClassVector2(vector<int> v) : vect(v)
    {
    }
    void print()
    {
      // print the value of vector
      for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";
    }
};

// class vector 3 - initializing a vector reference
class MyClassVector3
{
  vector<int>& vecto; //had to name vect bc vec and vect in use
  public:
  // this is the right way to assign the reference of stl container
  MyClassVector3(vector<int>& arr)
    :vecto(arr)
  {
  }
  void print()
  {
    //print the value of vector
    for (int i = 0; i < vecto.size(); i++)
      cout << vecto[i] << " ";
  }
};
bool less_than_7(int value)
    {
      return value < 7;
    }
    vector<int> v2;
    int count_less = std::count_if(v2.begin(), v2.end(), less_than_7);

int main(int argc, char* argv[]) 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 
    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4); 

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);
    vi.push_back(4);
   // add 3 elements to the vs vector
    vs.push_back("A");
    vs.push_back("B");
    vs.push_back("C");
    vs.push_back("string");
   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }

   //display the 3 elements in the vi vector
   cout << "\nValues in vi: " << endl;
   for(int i = 0; i < vi.size(); i++)
   {
     cout << vi[i] << endl;
   }
   // display the 3 elements in the vs vector
    cout << "\nValues in vs: \n";
    for(int i = 0; i < vs.size(); i++)
    {
      cout << vs[i] << endl;
    }

    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
       obj.print();
      
      //Continue with MyClassVector2 and MyClassVector3
      //credit geekforgeeks
    cout << "\nVector as a Class Member 2" << endl;
      vector<int> vect;
      for (int i = 1; i <= 5; i++)
        vect.push_back(i);
        MyClassVector2 obje(vect);
        obje.print();

    cout << "\nVector as a Class Member 3" << endl;
    vector<int> vecto;
    for (int i = 1; i <= 5; i++)
      vecto.push_back(i);
    MyClassVector3 objec(vecto);
    objec.print();
    /****Section_Name***STL_Iterators*/ 
    //setup
    cout << "\nSTL Iterators" << endl;
    vector< int > vint (10); //vector w 10 integer numbers :)
    vint[0] = 10;
    vint[1] = 20;
    vint[2] = 30;
    vint[3] = 40;
    vint[4] = 50;
    vint[5] = 60;
    vint[6] = 70;
    vint[7] = 80;
    vint[8] = 90;
    vint[9] = 100;

    //display elements of the vector:
    vector< int >::iterator it;
    for ( it = vint.begin(); it != vint.end(); ++it)
    { // like pointer, iterator is dereferenced to access the value of the element pointed by it:
      cout << " " << *it;
    }

    /****Section_Name*** Stack*/
    stack <int> st;

    st.push(100);     //push number on the stack
    assert(st.size() == 1);// verify one element is on the stack
    assert(st.top() == 100);//verify element value

    st.top() = 456;   //assign new value
    assert(st.top() == 456);

    st.pop();         //remove element
    assert(st.empty() == true);

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
    //setup
    cout << "\nSet" << endl;
    set<int> iset; // set of unique integer nums

    iset.insert(11); //populate set w some values
    iset.insert(-11);
    iset.insert(55);
    iset.insert(22);
    iset.insert(22);
    if (iset.find(55) != iset.end()) // is value already stored??
    {
      iset.insert(55);
    }
    assert(iset.size() == 4); // sanity check :)
    set<int>::iterator ite;
    for (ite = iset.begin(); ite != iset.end(); ite++)
    {
      cout << " " << *ite;
    }
    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure
    pair <string, string> strstr; // a pair is similar to a container
    strstr.first = "Hello";       //that holds exactly two elements
    strstr.second = "World";      //the pair is defined in the std
                                  //header named utility
    pair<int, string> intstr;
    intstr.first=1;
    intstr.second = "one";

    pair<string, int> strint("two", 2);
    assert(strint.first == "two");
    assert(strint.second == 2);
    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert

    MapT amap;
    pair<MapIterT, bool> result =
      amap.insert(make_pair("Fred", 45));

    assert(result.second == true);
    assert(result.first->second == 45);

    result = amap.insert(make_pair("Fred", 54));

    //Fred was already in the map, and result.first
    //simply points there now
    assert(result.second == false);
    assert(result.first->second == 45);

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary

    //setup
    cout << "\nMap Sumary\n";

    map<string,string>phone_book;
    phone_book["411"]="Directory";
    phone_book["911"]="Emergency";
    phone_book["508-678-2811"]="BBC";
    if (phone_book.find("411")!=phone_book.end())
    {
      phone_book.insert(
        make_pair(
          string("411"),
          string("Directory")
        )
      );
    }
    assert(phone_book.size() == 3);
    map<string,string>::const_iterator iter;
    for (iter = phone_book.begin(); iter!=phone_book.end(); ++iter)
    {
      cout
        << " " << iter->first
        << " " << iter->second
        << endl
        ;
    }

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    int arr[100];
    sort(arr,arr +100);
    vector<int> v1; // had to include <int> or else this wouldnt work
    sort(v1.begin(), v1.end());
    //thers no display option for the example code so i also wont print this but its there and the program compiles w all the rest of this mess

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    //this code is above int main. had to be done there.

    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }