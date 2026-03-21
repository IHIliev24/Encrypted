#ifndef QUESTION_H
#define QUESTION_H

#include <string>

struct Question {
    std::string category;
    std::string text;
    std::string optionA;
    std::string optionB;
    std::string optionC;
    std::string optionD;
    std::string correctAnswer;
    int points;
};

struct StudentResult {
    std::string name;
    int totalPoints;
    double grade;
    int categoryPoints[3];
    int categoryMaxPoints[3];
};

#endif