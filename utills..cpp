#include "utils.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>

std::vector<Studentas> nuskaitytiIsFailo(const std::string& failoVardas) {
    std::vector<Studentas> studentai;
    std::ifstream failas(failoVardas);

    if (!failas.is_open()) {
        throw std::runtime_error("Nepavyko atidaryti failo: " + failoVardas);
    }

    std::string eilute;
    std::getline(failas, eilute); // praleisti antraštę

    while (std::getline(failas, eilute)) {
        std::istringstream iss(eilute);
        std::string vardas, pavarde;
        std::vector<int> nd;
        int paz, egz;

        iss >> vardas >> pavarde;
        while (iss >> paz) {
            nd.push_back(paz);
        }

        if (nd.empty()) continue;
        egz = nd.back();
        nd.pop_back();

        Studentas s(vardas, pavarde, nd, egz);
        studentai.push_back(s);
    }

    return studentai;
}
