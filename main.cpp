#include "school.h"

int main() {
    StudentResult results[MAX_RESULTS];
    int resultCount = 0;
    int choice = -1;

    while (choice != 0) {
        printTitle("WELCOME TO GEO SCHOOL");
        std::cout << "1. Lesson\n";
        std::cout << "2. Practice tasks\n";
        std::cout << "3. Homework\n";
        std::cout << "4. Start test\n";
        std::cout << "5. Statistics\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose: ";
        std::cin >> choice;

        if (choice == 1) {
            showLesson();
        } else if (choice == 2) {
            showPracticeTasks();
        } else if (choice == 3) {
            showHomeworkTasks();
        } else if (choice == 4) {
            startTest(results, resultCount);
        } else if (choice == 5) {
            showStatistics(results, resultCount);
        } else if (choice == 0) {
            std::cout << "Goodbye!\n";
        } else {
            std::cout << "Invalid choice. Try again.\n";
        }

        std::cout << "\n";
    }

    return 0;
}

