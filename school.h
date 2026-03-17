#ifndef SCHOOL_H
#define SCHOOL_H

#include <iostream>
#include <string>
#include <iomanip>
#include "question.h"
 //Add question.h for za vuprosi za testovete//
const int QUESTION_COUNT = 30;
const int TEST_QUESTION_COUNT = 20;
const int MAX_RESULTS = 100;

void printLine();
void printTitle(const std::string& title);
void showLesson();
void showPracticeTasks();
void showHomeworkTasks();
void startTest(StudentResult results[], int& resultCount);
void showStatistics(const StudentResult results[], int resultCount);

#endif
