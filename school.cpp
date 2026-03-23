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

void showLesson() {
    printTitle("GEO SCHOOL - LESSON");
    std::cout << "Topic: Important places in Europe and the world\n\n";
    std::cout << "1. Capitals\n";
    std::cout << "A capital city is the main city of a country.\n";
    std::cout << "Examples: Sofia, Berlin, Paris, Rome.\n\n";

    std::cout << "2. Mountains\n";
    std::cout << "Mountains are high landforms. Some famous mountains are\n";
    std::cout << "Everest, Musala and mountain ranges like the Alps and Andes.\n\n";

    std::cout << "3. Rivers\n";
    std::cout << "Rivers are natural streams of water. Important rivers are\n";
    std::cout << "the Danube, Nile, Rhine and Volga.\n\n";

    std::cout << "This lesson helps students remember capitals, mountains\n";
    std::cout << "and rivers through short facts.\n";
}

void showPracticeTasks() {
    printTitle("GEO SCHOOL - PRACTICE TASKS");
    std::cout << "1. Write 5 capitals from Europe.\n";
    std::cout << "2. Name 3 mountain ranges.\n";
    std::cout << "3. Name 3 rivers in Europe.\n";
    std::cout << "4. Which river passes through Bulgaria?\n";
    std::cout << "5. Which mountain is the highest in Bulgaria?\n";
}

void showHomeworkTasks() {
    printTitle("GEO SCHOOL - HOMEWORK");
    std::cout << "1. Make a short table with 5 countries and their capitals.\n";
    std::cout << "2. Write 3 sentences about Mount Everest.\n";
    std::cout << "3. Find on a map where the Danube River starts and where it ends.\n";
    std::cout << "4. Compare the Alps and the Balkan Mountains in 2 sentences.\n";
}

void buildTest(int variant, int selectedQuestions[TEST_QUESTION_COUNT]) {
    int start = variant - 1;

    for (int i = 0; i < 8; i++) {
        selectedQuestions[i] = (start + i) % 10;
    }

    for (int i = 0; i < 6; i++) {
        selectedQuestions[8 + i] = 10 + (start + i) % 10;
    }

    for (int i = 0; i < 6; i++) {
        selectedQuestions[14 + i] = 20 + (start + i) % 10;
    }
}

bool isCorrectAnswer(const std::string& answer, const std::string& correctAnswer) {
    return answer == correctAnswer ||
           (correctAnswer == "A" && answer == "a") ||
           (correctAnswer == "B" && answer == "b") ||
           (correctAnswer == "C" && answer == "c") ||
           (correctAnswer == "D" && answer == "d");
}

int askQuestion(const Question& question) {
    std::string answer;

    std::cout << question.text << "\n";
    std::cout << question.optionA << "\n";
    std::cout << question.optionB << "\n";
    std::cout << question.optionC << "\n";
    std::cout << question.optionD << "\n";
    std::cout << "Your answer: ";
    std::cin >> answer;

    if (isCorrectAnswer(answer, question.correctAnswer)) {
        std::cout << "Correct! +" << question.points << " points\n\n";
        return question.points;
    }

    std::cout << "Wrong. Correct answer: " << question.correctAnswer << "\n\n";
    return 0;
}

int findMaxPoints(const int selectedQuestions[TEST_QUESTION_COUNT]) {
    int sum = 0;

    for (int i = 0; i < TEST_QUESTION_COUNT; i++) {
        sum += questionBank[selectedQuestions[i]].points;
    }

    return sum;
}

double calculateGrade(int points, int maxPoints) {
    double percent = 0.0;

    if (maxPoints > 0) {
        percent = (points * 100.0) / maxPoints;
    }

    if (percent >= 90.0) {
        return 6.0;
    }
    if (percent >= 75.0) {
        return 5.0;
    }
    if (percent >= 60.0) {
        return 4.0;
    }
    if (percent >= 45.0) {
        return 3.0;
    }
    return 2.0;
}

void startTest(StudentResult results[], int& resultCount) {
    if (resultCount >= MAX_RESULTS) {
        std::cout << "Result list is full.\n";
        return;
    }

    StudentResult currentResult;
    int selectedQuestions[TEST_QUESTION_COUNT];
    int variant = 1;
    int maxPoints = 0;

    for (int i = 0; i < 3; i++) {
        currentResult.categoryPoints[i] = 0;
        currentResult.categoryMaxPoints[i] = 0;
    }

    printTitle("GEO SCHOOL - TEST");
    std::cout << "Student name: ";
    std::cin.ignore(1000, '\n');
    std::getline(std::cin, currentResult.name);

    std::cout << "Choose test variant (1, 2 or 3): ";
    std::cin >> variant;

    if (variant < 1 || variant > 3) {
        variant = 1;
    }

    buildTest(variant, selectedQuestions);
    currentResult.totalPoints = 0;

    for (int i = 0; i < TEST_QUESTION_COUNT; i++) {
        Question currentQuestion = questionBank[selectedQuestions[i]];
        int categoryIndex = getCategoryIndex(currentQuestion.category);
        int earnedPoints = 0;

        std::cout << "Question " << (i + 1) << " of " << TEST_QUESTION_COUNT
                  << " | Category: " << currentQuestion.category << "\n";

        currentResult.categoryMaxPoints[categoryIndex] += currentQuestion.points;
        earnedPoints = askQuestion(currentQuestion);
        currentResult.categoryPoints[categoryIndex] += earnedPoints;
        currentResult.totalPoints += earnedPoints;
    }

    maxPoints = findMaxPoints(selectedQuestions);
    currentResult.grade = calculateGrade(currentResult.totalPoints, maxPoints);

    printLine();
    std::cout << "Student: " << currentResult.name << "\n";
    std::cout << "Points: " << currentResult.totalPoints << " / " << maxPoints << "\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Grade: " << currentResult.grade << "\n";
    printLine();

    results[resultCount] = currentResult;
    resultCount++;
}

void showStatistics(const StudentResult results[], int resultCount) {
    if (resultCount == 0) {
        printTitle("GEO SCHOOL - STATISTICS");
        std::cout << "No tests taken yet.\n";
        return;
    }

    int bestIndex = 0;
    int worstIndex = 0;
    double sumGrades = 0.0;
    int sumPoints = 0;
    int totalCategoryPoints[3] = {0, 0, 0};
    int totalCategoryMaxPoints[3] = {0, 0, 0};

    for (int i = 0; i < resultCount; i++) {
        if (results[i].totalPoints > results[bestIndex].totalPoints) {
            bestIndex = i;
        }

        if (results[i].totalPoints < results[worstIndex].totalPoints) {
            worstIndex = i;
        }

        sumGrades += results[i].grade;
        sumPoints += results[i].totalPoints;

        for (int j = 0; j < 3; j++) {
            totalCategoryPoints[j] += results[i].categoryPoints[j];
            totalCategoryMaxPoints[j] += results[i].categoryMaxPoints[j];
        }
    }

    int bestCategoryIndex = 0;
    int worstCategoryIndex = 0;
    double bestPercent = 0.0;
    double worstPercent = 100.0;

    for (int i = 0; i < 3; i++) {
        double percent = 0.0;

        if (totalCategoryMaxPoints[i] > 0) {
            percent = (totalCategoryPoints[i] * 100.0) / totalCategoryMaxPoints[i];
        }

        if (i == 0 || percent > bestPercent) {
            bestPercent = percent;
            bestCategoryIndex = i;
        }

        if (i == 0 || percent < worstPercent) {
            worstPercent = percent;
            worstCategoryIndex = i;
        }
    }

    printTitle("GEO SCHOOL - STATISTICS");
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Tests taken: " << resultCount << "\n\n";

    std::cout << "Best student: " << results[bestIndex].name
              << " with " << results[bestIndex].totalPoints << " points\n";
    std::cout << "Weakest student: " << results[worstIndex].name
              << " with " << results[worstIndex].totalPoints << " points\n\n";

    std::cout << "Average points: " << (sumPoints * 1.0 / resultCount) << "\n";
    std::cout << "Average grade: " << (sumGrades / resultCount) << "\n\n";

    std::cout << std::left << std::setw(15) << "Category"
              << std::setw(15) << "Success %" << "\n";
    printLine();

    for (int i = 0; i < 3; i++) {
        double percent = 0.0;
        if (totalCategoryMaxPoints[i] > 0) {
            percent = (totalCategoryPoints[i] * 100.0) / totalCategoryMaxPoints[i];
        }

        std::cout << std::left << std::setw(15) << categoryNames[i]
                  << std::setw(15) << percent << "\n";
    }

    printLine();
    std::cout << "Best category: " << categoryNames[bestCategoryIndex] << "\n";
    std::cout << "Weakest category: " << categoryNames[worstCategoryIndex] << "\n";
}