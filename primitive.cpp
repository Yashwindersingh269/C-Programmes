#include <iostream>
using namespace std;
int main()
{
/*********************
 * Character type
 ********************/

 char middle_initial {'J'};
 cout <<" My middle_initial is " << middle_initial << endl;

 /********************
  * Interger Type
  *******************/

  unsigned short int exam_score {55};
  cout <<" My exam score was " << exam_score << endl;
  
  int countries_represented {65};
  cout <<" There were " << countries_represented <<" Countries rerprresentedd in my meeting " << endl;

  long people_in_florida {20610000};
  cout <<" There are about " << people_in_florida << " Peoples in Florida " << endl;
  
  long long people_on_earth {7600000000};
  cout <<" There are about " << people_on_earth <<" People on Earth " << endl;

  long long distance_to_alpha_centauri {9461000000000};
  cout <<" The distance to the alpha centauri is " << distance_to_alpha_centauri <<" kilometers " << endl;

  float car_payment {401.23};
  cout <<" My car payment is " << car_payment << endl;

  double pi {3.14159};
  cout <<" PI is " << pi << endl;

  long double large_amount {2.7e120};
  cout << large_amount  <<" is a very big number "<< endl;

  bool game_over {false};
  cout << " The value of the game over is " << game_over << endl;

  short value1 {30000};
  short value2 {1000};
  short sum {value1+value2};

  cout<<" The sum of " << value1 <<" and " << value2 <<" is " << sum << endl;
  
  return 0;

}