#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct PersonalRecord {
    std::string name;
    std::string dob;
    std::string phoneNumber;

    // Constructor for easy initialization
    PersonalRecord(const std::string& n, const std::string& d, const std::string& phone)
        : name(n), dob(d), phoneNumber(phone) {}
};

// Function to display a personal record
void displayRecord(const PersonalRecord& record) {
    std::cout << "Name: " << record.name << "\tDOB: " << record.dob << "\tPhone: " << record.phoneNumber << std::endl;
}

// Function to compare two records by name for sorting
bool compareByName(const PersonalRecord& record1, const PersonalRecord& record2) {
    return record1.name < record2.name;
}

int main() {
    std::vector<PersonalRecord> records;

    // Adding some sample records
    records.push_back({"John Doe", "1990-05-15", "123-456-7890"});
    records.push_back({"Alice Smith", "1985-08-22", "987-654-3210"});
    records.push_back({"Bob Johnson", "1978-12-10", "555-123-4567"});

    // Sorting records by name
    std::sort(records.begin(), records.end(), compareByName);

    // Displaying sorted records
    std::cout << "Sorted Records:\n";
    for (const auto& record : records) {
        displayRecord(record);
    }

    // Searching for a record by name
    std::string searchName;
    std::cout << "\nEnter a name to search: ";
    std::getline(std::cin, searchName);

    auto it = std::find_if(records.begin(), records.end(), [searchName](const PersonalRecord& record) {
        return record.name == searchName;
    });

    if (it != records.end()) {
        std::cout << "Record found:\n";
        displayRecord(*it);
    } else {
        std::cout << "Record not found.\n";
    }

    return 0;
}
