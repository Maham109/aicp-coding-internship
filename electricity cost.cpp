#include <iostream>
#include <iomanip>

const int NUM_SLABS = 3;
const int SLAB_RANGES[NUM_SLABS] = {100, 200, 300};
const int SLAB_COSTS[NUM_SLABS] = {10, 15, 20};

int electricityData[NUM_SLABS][3] = {
    {55, 65, 75},
    {120, 150, 170},
    {210, 230, 240}
};

void displayStudentID() {
    std::cout << "Student ID: [Motia 21046]" << std::endl;
}

void costSlab(int slabIndex) {
    int units = 0;
    for (int i = 0; i < NUM_SLABS; ++i) {
        units = electricityData[slabIndex][i];
        int cost = units * SLAB_COSTS[slabIndex];
        std::cout << "Cost for Slab " << slabIndex + 1 << ", Unit " << i + 1 << ": Rs." << cost << std::endl;
    }
}

void displayMenu() {
    std::cout << "\nMenu:" << std::endl;
    std::cout << "1. Display the bill of Slab 1 and Slab 2." << std::endl;
    std::cout << "2. Display the bill of Slab 3." << std::endl;
    std::cout << "Press any other key to exit." << std::endl;
}

int main() {
    displayStudentID();

    char choice;
    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case '1':
                costSlab(0);
                costSlab(1);
                break;
            case '2':
                costSlab(2);
                break;
            default:
                std::cout << "Exiting the program." << std::endl;
                return 0;
        }
    } while (true);

    return 0;
}
