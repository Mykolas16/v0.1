#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <string>
#include <vector>

class Studentas {
private:
    std::string vardas;
    std::string pavarde;
    std::vector<int> namuDarbai;
    int egzaminas;
    double galVid;
    double galMed;

public:
    Studentas();
    Studentas(const std::string& v, const std::string& p, const std::vector<int>& nd, int egz);

    void skaiciuotiGalutinius();
    std::string getVardas() const;
    std::string getPavarde() const;
    double getGalVid() const;
    double getGalMed() const;

    friend std::ostream& operator<<(std::ostream& out, const Studentas& s);
};

#endif
