// Working with External Data.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <sstream>
using namespace std;

class Happy {
public:
	string country;
	string region;
	int rank;
	double score;
	double standardError;

	Happy(string c, string r, int hr, double hs, double se) {
		country = c;
		region = r;
		rank = hr;
		score = hs;
		standardError = se;
	}

	void display() const {
		cout << left << setw(25) << country << setw(35) << region << setw(6) << rank << setw(12) << fixed << setprecision(4) << score << setw(10) << standardError << endl;
	}
};

class Reader {
private:
	string filename;

public:
	Reader(string file) {
		filename = file;
	}

	vector<Happy> loadData() {
		vector<Happy> records;
		ifstream file(filename);
		if (!file.is_open()) {
			cerr << "Error: Could not open file " << filename << endl;
			return records;
		}

		string line;
		getline(file, line);

		while (getline(file, line)) {
			stringstream ss(line);
			string temp;
			vector<string> cols;


			while (getline(ss, temp, ',')) {
				cols.push_back(temp);
			}

			if (cols.size() < 6) continue;

			try {
				string country = cols[1];
				string region = cols[2];
				int rank = stoi(cols[3]);
				double score = stod(cols[4]);
				double se = stod(cols[5]);
				records.emplace_back(country, region, rank, score, se);
			}
			catch (...) {
				cerr << "Skipping invalid line: " << line << endl;
			}
		}
		file.close();
		return records;
	}
};

int main()
{
	Reader read("E:/VS/source/repos/Working with External Data/world_happiness_report.csv");
	vector<Happy> data = read.loadData();
	cout << left << setw(25) << "Country" << setw(35) << "Region" << setw(6) << "Rank" << setw(12) << fixed << setprecision(5) << "Score" << setw(10) << "Std Error" << endl;
	cout << string(88, '-') << endl;
	for (const Happy& r : data) {
		r.display();
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
