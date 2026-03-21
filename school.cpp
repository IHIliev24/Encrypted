#include "school.h"

Question questionBank[QUESTION_COUNT] = {
    {"Capitals", "What is the capital of Bulgaria?", "A) Sofia", "B) Varna", "C) Plovdiv", "D) Burgas", "A", 1},
    {"Capitals", "What is the capital of Germany?", "A) Munich", "B) Berlin", "C) Hamburg", "D) Bonn", "B", 1},
    {"Capitals", "What is the capital of France?", "A) Lyon", "B) Nice", "C) Paris", "D) Marseille", "C", 1},
    {"Capitals", "What is the capital of Italy?", "A) Milan", "B) Rome", "C) Venice", "D) Naples", "B", 1},
    {"Capitals", "What is the capital of Spain?", "A) Madrid", "B) Barcelona", "C) Valencia", "D) Seville", "A", 1},
    {"Capitals", "What is the capital of Greece?", "A) Sofia", "B) Athens", "C) Patras", "D) Crete", "B", 1},
    {"Capitals", "What is the capital of Romania?", "A) Cluj", "B) Constanta", "C) Bucharest", "D) Brasov", "C", 1},
    {"Capitals", "What is the capital of Serbia?", "A) Belgrade", "B) Novi Sad", "C) Nis", "D) Kragujevac", "A", 1},
    {"Capitals", "What is the capital of Turkey?", "A) Istanbul", "B) Ankara", "C) Izmir", "D) Bursa", "B", 1},
    {"Capitals", "What is the capital of the United Kingdom?", "A) Manchester", "B) Liverpool", "C) London", "D) Oxford", "C", 1},

    {"Mountains", "What is the highest mountain in the world?", "A) Mont Blanc", "B) K2", "C) Everest", "D) Elbrus", "C", 2},
    {"Mountains", "Which mountain range is in Bulgaria?", "A) Alps", "B) Rila", "C) Andes", "D) Himalayas", "B", 2},
    {"Mountains", "Which mountain range separates Europe and Asia?", "A) Ural", "B) Pyrenees", "C) Balkan", "D) Apennines", "A", 2},
    {"Mountains", "Which mountain range is between France and Spain?", "A) Alps", "B) Carpathians", "C) Pyrenees", "D) Caucasus", "C", 2},
    {"Mountains", "Which mountain is the highest peak in Bulgaria?", "A) Musala", "B) Vihren", "C) Botev", "D) Malyovitsa", "A", 2},
    {"Mountains", "Which mountain range is the longest in the world?", "A) Alps", "B) Andes", "C) Himalayas", "D) Rockies", "B", 2},
    {"Mountains", "Which mountain range is in Central Europe?", "A) Alps", "B) Balkan", "C) Rhodope", "D) Taurus", "A", 2},
    {"Mountains", "Which mountain range is in South America?", "A) Ural", "B) Andes", "C) Alps", "D) Carpathians", "B", 2},
    {"Mountains", "Which mountain range is in Romania?", "A) Carpathians", "B) Himalayas", "C) Andes", "D) Atlas", "A", 2},
    {"Mountains", "Which mountain range is on the border of Bulgaria and Greece?", "A) Rila", "B) Pirin", "C) Rhodope", "D) Sakar", "C", 2},

    {"Rivers", "Which is the longest river in Europe?", "A) Danube", "B) Rhine", "C) Volga", "D) Seine", "C", 1},
    {"Rivers", "Which river passes through Bulgaria?", "A) Nile", "B) Danube", "C) Amazon", "D) Yangtze", "B", 1},
    {"Rivers", "Which river flows through Egypt?", "A) Nile", "B) Congo", "C) Mekong", "D) Po", "A", 1},
    {"Rivers", "Which river flows through Paris?", "A) Thames", "B) Seine", "C) Rhine", "D) Tiber", "B", 1},
    {"Rivers", "Which river flows through London?", "A) Thames", "B) Danube", "C) Elbe", "D) Po", "A", 1},
    {"Rivers", "Which river flows through Rome?", "A) Seine", "B) Volga", "C) Tiber", "D) Dnieper", "C", 1},
    {"Rivers", "Which river forms part of the border of Bulgaria?", "A) Maritsa", "B) Danube", "C) Iskar", "D) Struma", "B", 1},
    {"Rivers", "Which river is in Germany?", "A) Rhine", "B) Nile", "C) Amazon", "D) Ganges", "A", 1},
    {"Rivers", "Which river is the longest in the world?", "A) Mississippi", "B) Nile", "C) Amazon", "D) Danube", "B", 1},
    {"Rivers", "Which river flows into the Black Sea?", "A) Danube", "B) Thames", "C) Seine", "D) Tiber", "A", 1}
};

std::string categoryNames[3] = {"Capitals", "Mountains", "Rivers"};

void printLine() {
    std::cout << "------------------------------------------------------------\n";
}

void printTitle(const std::string& title) {
    printLine();
    std::cout << title << "\n";
    printLine();
}

int getCategoryIndex(const std::string& category) {
    if (category == "Capitals") {
        return 0;
    }
    if (category == "Mountains") {
        return 1;
    }
    return 2;
}