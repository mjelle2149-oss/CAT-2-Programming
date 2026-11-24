// ACTIVITY 4: ROBUST CSV PARSER
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>
using namespace std;

int main() {
    ifstream file("students.csv");
    if (!file.is_open()) {
        cerr << "Error: Could not find students.csv!" << endl;
        return 1;
    }

    string line;
    cout << "--- Processing Student Records ---" << endl;

    while (getline(file, line)) {
        if (line.empty()) continue;

        stringstream ss(line);
        string name, scoreStr1, scoreStr2, scoreStr3;

        if (!getline(ss, name, ',') ||
            !getline(ss, scoreStr1, ',') ||
            !getline(ss, scoreStr2, ',') ||
            !getline(ss, scoreStr3)) {
            cout << "WARNING: Skipping malformed line: " << line << endl;
            continue;
        }

        try {
            size_t pos1, pos2, pos3;
            int s1 = stoi(scoreStr1, &pos1);
            int s2 = stoi(scoreStr2, &pos2);
            int s3 = stoi(scoreStr3, &pos3);

            // Reject trailing non-numeric characters and scores outside 0-100.
            if (pos1 != scoreStr1.size() || pos2 != scoreStr2.size() ||
                pos3 != scoreStr3.size() ||
                s1 < 0 || s1 > 100 || s2 < 0 || s2 > 100 ||
                s3 < 0 || s3 > 100) {
                throw invalid_argument("Invalid score data");
            }

            double average = (s1 + s2 + s3) / 3.0;
            cout << name << " -> Average: " << average << endl;
        } catch (const invalid_argument&) {
            cout << "WARNING: Skipping malformed record for " << name
                 << " (Invalid score data)." << endl;
        } catch (const out_of_range&) {
            cout << "WARNING: Skipping malformed record for " << name
                 << " (Score is out of range)." << endl;
        }
    }

    file.close();
    cout << "\n--- Processing Complete ---" << endl;
    return 0;
}
