// Example program
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iomanip>


using std::cout;
using std::string;
using std::vector;
using std:: accumulate;
using std:: copy;
class Studentas{
    string vardas;
    string pavarde;
    string rubas;
    vector<int>paz;
    int egzaminas;
    double rezultatas;   
public:
    Studentas(){
    int p;
    std:: cin>>vardas>>pavarde;
    for ( int i=0;i<5;i++){
    std::cin>>p;
    paz.push_back(p);
}
std::cin>> egzaminas;
rez();
}      
    Studentas(string A, string B, vector <int>C, int D){
        vardas=A;
        pavarde=B;
        paz=C;
       egzaminas =D;
       rez();
    }
             
       void rez(){
           rezultatas= accumulate(paz.begin(), paz.end(), 0) /paz.size() *0.4 +egzaminas*0.6;
       }
        void output(){
              cout<<vardas<< " | "<<pavarde<<" | " << rezultatas<<std::endl;
          }
          Studentas (const Studentas& other) // 1. m
          {
              vardas=other.vardas;
              pavarde=other.pavarde;
              std::copy(other. paz.begin(), other.paz.end(), std::back_inserter(paz));
              egzaminas=other.egzaminas;
              rezultatas=other.rezultatas;           
          }
          Studentas& operator=(const Studentas &other){
              if (this == &other) return *this;
              else{
                vardas=other.vardas;
              pavarde=other.pavarde;
              std::copy(other. paz.begin(), other.paz.end(), std::back_inserter(paz));
              egzaminas=other.egzaminas;
              rezultatas=other.rezultatas;
              return*this;
              }         
               }   
    ~Studentas(){
        vardas.clear();
        pavarde.clear();
        paz.clear();
       egzaminas =0;
       rezultatas=0; }
      
                string GetVar(){return vardas;}
                string GetPav(){return pavarde;}
               double GetRez(){return rezultatas;}             
    };
    std:: ostream& operator<<(std:: ostream& output, Studentas& T)
           {
               output<<T.GetVar()<< " | " << T.GetPav()<< " | " << std::fixed << std::setprecision(2)  <<T.GetRez()<<std::endl;
               return output;
               }
   int main ()
{
    vector<Studentas> grupe;
    for (int i = 0; i < 5; i++) {
        Studentas Test;
        grupe.push_back(Test);
    }

    Studentas A(grupe[0]);
    Studentas B = grupe[0];

    // Lentelės antraštė
    cout << std::left
         << std::setw(12) << "Pavardė"
         << std::setw(12) << "Vardas"
         << "Galutinis (Vid.)" << std::endl;

    cout << "------------------------------------------" << std::endl;

    // Išvedimas
    for (auto &Z: grupe) cout << Z << A << B;
}
