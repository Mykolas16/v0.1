#include "Studentas.h"
#include <numeric>
#include <algorithm>
#include <iomanip>
#include <iostream>

Studentas::Studentas() : vardas(""), pavarde(""), egzaminas(0), galVid(0), galMed(0) {}

Studentas::Studentas(const std::string& v, const std::string& p, const std::vector<int>& nd, int egz)
    : vardas(v), pavarde(p), namuDarbai(nd), egzaminas(egz) {
    skaiciuotiGalutinius();
}

void Studentas::skaiciuotiGalutinius() {
    if (namuDarbai.empty()) {
        galVid = galMed = 0;
        return;
    }

    galVid = std::accumulate(namuDarbai.begin(), namuDarbai.end(), 0.0) / namuDarbai.size() * 0.4 + egzaminas * 0.6;

    std::vector<int> sorted = namuDarbai;
    std::sort(sorted.begin(), sorted.end());
    size_t n = sorted.size();
    galMed = (n % 2 == 0) ? 
             (sorted[n / 2 - 1] + sorted[n / 2]) / 2.0 :
             sorted[n / 2];
    galMed = galMed * 0.4 + egzaminas * 0.6;
}

std::string Studentas::getVardas() const { return vardas; }
std::string Studentas::getPavarde() const { return pavarde; }
double Studentas::getGalVid() const { return galVid; }
double Studentas::getGalMed() const { return galMed; }

std::ostream& operator<<(std::ostream& out, const Studentas& s) {
    out << std::setw(12) << s.getPavarde()
        << std::setw(12) << s.getVardas()
        << std::setw(20) << std::fixed << std::setprecision(2) << s.getGalVid()
        << std::setw(20) << std::fixed << std::setprecision(2) << s.getGalMed();
    return out;
}
