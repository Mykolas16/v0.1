#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "Studentas.h"
#include "utils.h"

int main() {
    try {
        std::vector<Studentas> studentai = nuskaitytiIsFailo("kursiokai.txt");

        std::sort(studentai.begin(), studentai.end(), [](const Studentas& a, const Studentas& b) {
            return a.getPavarde() < b.getPavarde(); // arba getVardas() jei nori
        });

        std::cout << std::left << std::setw(12) << "Pavarde"
                  << std::setw(12) << "Vardas"
                  << std::setw(20) << "Galutinis (Vid.)"
                  << std::setw(20) << "Galutinis (Med.)" << "\n";
        std::cout << std::string(64, '-') << "\n";

        for (const auto& s : studentai) {
            std::cout << s << "\n";
        }

    } catch (const std::exception& e) {
        std::cerr << "Klaida: " << e.what() << "\n";
        return 1;
    }

    return 0;
}
