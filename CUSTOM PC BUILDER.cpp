
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    // Arrays to store item information
    vector<string> item_codes;
    vector<string> item_descriptions;
    vector<double> item_prices;

    // Initialize item information
    item_codes.push_back("A1");
    item_codes.push_back("A2");
    item_codes.push_back("B1");
    item_codes.push_back("B2");
    item_codes.push_back("B3");
    item_codes.push_back("C1");
    item_codes.push_back("C2");
    item_codes.push_back("C3");
    item_codes.push_back("D1");
    item_codes.push_back("D2");
    item_codes.push_back("E1");
    item_codes.push_back("E2");
    item_codes.push_back("E3");
    item_codes.push_back("F1");
    item_codes.push_back("F2");
    item_codes.push_back("G1");
    item_codes.push_back("G2");

    item_descriptions.push_back("Compact Case");
    item_descriptions.push_back("Tower Case");
    item_descriptions.push_back("8 GB RAM");
    item_descriptions.push_back("16 GB RAM");
    item_descriptions.push_back("32 GB RAM");
    item_descriptions.push_back("1 TB HDD");
    item_descriptions.push_back("2 TB HDD");
    item_descriptions.push_back("4 TB HDD");
    item_descriptions.push_back("240 GB SSD");
    item_descriptions.push_back("480 GB SSD");
    item_descriptions.push_back("1 TB Second HDD");
    item_descriptions.push_back("2 TB Second HDD");
    item_descriptions.push_back("4 TB Second HDD");
    item_descriptions.push_back("DVD/Blu-Ray Player");
    item_descriptions.push_back("DVD/Blu-Ray Re-writer");
    item_descriptions.push_back("Standard OS");
    item_descriptions.push_back("Professional OS");

    item_prices.push_back(75.00);
    item_prices.push_back(150.00);
    item_prices.push_back(79.99);
    item_prices.push_back(149.99);
    item_prices.push_back(299.99);
    item_prices.push_back(49.99);
    item_prices.push_back(89.99);
    item_prices.push_back(129.99);
    item_prices.push_back(59.99);
    item_prices.push_back(119.99);
    item_prices.push_back(49.99);
    item_prices.push_back(89.99);
    item_prices.push_back(129.99);
    item_prices.push_back(50.00);
    item_prices.push_back(100.00);
    item_prices.push_back(100.00);
    item_prices.push_back(175.00);

    cout << "Welcome to the Custom PC Builder!" << endl;
    cout << "You can choose one case, one RAM, and one Main Hard Disk Drive for your computer." << endl;

    // Choose components
    string chosen_case, chosen_ram, chosen_hdd;

    while (true) {
        cout << "\nChoose a Case:" << endl;
        for (size_t i = 0; i < item_codes.size(); i++) {
            if (item_codes[i] == "A1" || item_codes[i] == "A2") {
                cout << item_codes[i] << "\t" << item_descriptions[i] << "\t$" << fixed << setprecision(2) << item_prices[i] << endl;
            }
        }
        cout << "Enter the item code for your Case choice (or 'done' to finish): ";
        cin >> chosen_case;

        if (chosen_case == "done") {
            break;
        }

        cout << "\nChoose RAM:" << endl;
        for (size_t i = 0; i < item_codes.size(); i++) {
            if (item_codes[i] == "B1" || item_codes[i] == "B2" || item_codes[i] == "B3") {
                cout << item_codes[i] << "\t" << item_descriptions[i] << "\t$" << fixed << setprecision(2) << item_prices[i] << endl;
            }
        }
        cout << "Enter the item code for your RAM choice (or 'done' to finish): ";
        cin >> chosen_ram;

        if (chosen_ram == "done") {
            break;
        }

        cout << "\nChoose Main Hard Disk Drive:" << endl;
        for (size_t i = 0; i < item_codes.size(); i++) {
            if (item_codes[i] == "C1" || item_codes[i] == "C2" || item_codes[i] == "C3") {
                cout << item_codes[i] << "\t" << item_descriptions[i] << "\t$" << fixed << setprecision(2) << item_prices[i] << endl;
            }
        }
        cout << "Enter the item code for your Main Hard Disk Drive choice (or 'done' to finish): ";
        cin >> chosen_hdd;

        if (chosen_hdd == "done") {
            break;
        }

        // Calculate the total price
        double basic_components_price = 200.00;
        double chosen_items_price = item_prices[find(item_codes.begin(), item_codes.end(), chosen_case) - item_codes.begin()] +
            item_prices[find(item_codes.begin(), item_codes.end(), chosen_ram) - item_codes.begin()] +
            item_prices[find(item_codes.begin(), item_codes.end(), chosen_hdd) - item_codes.begin()];

        double total_price = basic_components_price + chosen_items_price;

        // Allow the customer to choose additional items
        vector<string> additional_items;
        string additional_item;
        
        while (true) {
            cout << "\nChoose additional items from any category:" << endl;
            for (size_t i = 0; i < item_codes.size(); i++) {
                if (find(additional_items.begin(), additional_items.end(), item_codes[i]) == additional_items.end()) {
                    cout << item_codes[i] << "\t" << item_descriptions[i] << "\t$" << fixed << setprecision(2) << item_prices[i] << endl;
                }
            }
            cout << "Enter the item code for your Additional Item choice (or 'done' to finish): ";
            cin >> additional_item;

            if (additional_item == "done") {
                break;
            }

            additional_items.push_back(additional_item);
        }

        // Calculate the price of additional items
        double additional_items_price = 0.0;
        for (size_t i = 0; i < additional_items.size(); i++) {
            additional_items_price += item_prices[find(item_codes.begin(), item_codes.end(), additional_items[i]) - item_codes.begin()];
        }

        // Update the total price
        total_price += additional_items_price;

        // Determine the discount based on the number of additional items
        double discount = 0.0;
        if (additional_items.size() == 1) {
            discount = 0.05; // 5% discount for one additional item
        } else if (additional_items.size() >= 2) {
            discount = 0.10; // 10% discount for two or more additional items
        }

        // Calculate the discount amount
        double discount_amount = discount * total_price;

        // Apply the discount
        total_price -= discount_amount;

        // Display chosen items, additional items, discount, amount saved, and the new total price
        cout << "\nChosen Components:" << endl;
        cout << "Case: " << chosen_case << " - " << item_descriptions[find(item_codes.begin(), item_codes.end(), chosen_case) - item_codes.begin()] << endl;
        cout << "RAM: " << chosen_ram << " - " << item_descriptions[find(item_codes.begin(), item_codes.end(), chosen_ram) - item_codes.begin()] << endl;
        cout << "Main Hard Disk Drive: " << chosen_hdd << " - " << item_descriptions[find(item_codes.begin(), item_codes.end(), chosen_hdd) - item_codes.begin()] << endl;

        if (!additional_items.empty()) {
            cout << "\nChosen Additional Items:" << endl;
            for (size_t i = 0; i < additional_items.size(); i++) {
                cout << additional_items[i] << " - " << item_descriptions[find(item_codes.begin(), item_codes.end(), additional_items[i]) - item_codes.begin()] << endl;
            }
        }

        cout << "Total Price (before discount): $" << fixed << setprecision(2) << total_price + discount_amount << endl;
        cout << "Discount Applied: " << discount * 100 << "%" << endl;
        cout << "Amount Saved: $" << fixed << setprecision(2) << discount_amount << endl;
        cout << "New Total Price (after discount): $" << fixed << setprecision(2) << total_price << endl;
        break;
    }

    return 0;
}
