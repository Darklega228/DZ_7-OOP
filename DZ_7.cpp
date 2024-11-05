#include <iostream>
#include <windows.h>
#include <vector>
#include <print>
using namespace std;

class Desklamp {
	int* weights = nullptr;
	char* Brand = nullptr;
	int weight_count = 0;
	int Brightness;

public:
	void AddWeights(int* weights, int count) { }

	void AddWeight(int weight) {
		if (weight < 1 || weight > 30)
			throw "Incorrect value.";
		if (weight_count == 0) {
			weights = new int[1];
			weights[0] = weight;
		}
		else {
			int* temp = new int[weight_count + 1];
			for (int i = 0; i < weight_count; i++)
				temp[i] = weights[i];
			temp[weight_count] = weight;
			delete[] weights;
			weights = temp;
		}
		weight_count++;
	}

	vector<int> GetWeight() const {
		vector<int> temp;
		for (int i = 0; i < weight_count; i++)
			temp.push_back(weights[i]);
		return temp;
	}

	int GetWeightByIndex(unsigned int index) {
		if (index >= weight_count) throw "Incorrect index!\n";
		return weights[index];
	}

	void SetBrand(const char* Brand) {
		if (this->Brand != nullptr)
			delete[] this->Brand;
		int length = strlen(Brand) + 1;
		this->Brand = new char[length];
		strcpy_s(this->Brand, length, Brand);
	}

	string GetBrand() const {
		return string(Brand);
	}

	explicit Desklamp(string Brand) : Desklamp(Brand.c_str(), 18) {}

	explicit Desklamp(int value) : Desklamp("Alex", value) {}

	explicit Desklamp() : Desklamp(35) {}

	explicit Desklamp(int* ar) : Desklamp("Alex", 35) {
		weights = ar;
		weight_count = _msize(ar) / sizeof(int);
		cout << weight_count << "\n";
	}

	Desklamp(Desklamp& ori) {
		cout << "COPY C-TOR!\n";
		SetBrand(ori.Brand);
		SetBrightness(ori.Brightness);
	}

	explicit Desklamp(const char* Brand, int Brightness) {
		SetBrand(Brand);
		SetBrightness(Brightness);
	}

	void SetBrightness(int Brightness) {
		this->Brightness = Brightness;
	}

	int GetBrightness() const {
		return Brightness;
	}

	void Print() const {
		cout << "Лампа " << Brand << ", " << Brightness << "\n";
		for (int i = 0; i < weight_count; i++) {
			cout << weights[i] << ", ";
		}
		cout << "\n\n";
	}

	~Desklamp() {
		if (Brand != nullptr) {
			delete[] Brand;
			Brand = nullptr;
		}
		if (weights != nullptr) {
			delete[] weights;
			weights = nullptr;
		}
	}
};

class Laptop {
	int* weightsNout = nullptr;
	char* Brand = nullptr;
	int weightNout_count = 0;
	int hertz;

public:
	void AddWeights(int* weightsNout, int count) { }

	void AddWeight(int weight) {
		if (weight < 1 || weight > 30)
			throw "Incorrect value.";
		if (weightNout_count == 0) {
			weightsNout = new int[1];
			weightsNout[0] = weight;
		}
		else {
			int* temp = new int[weightNout_count + 1];
			for (int i = 0; i < weightNout_count; i++)
				temp[i] = weightsNout[i];
			temp[weightNout_count] = weight;
			delete[] weightsNout;
			weightsNout = temp;
		}
		weightNout_count++;
	}

	vector<int> GetWeight() const {
		vector<int> temp;
		for (int i = 0; i < weightNout_count; i++)
			temp.push_back(weightsNout[i]);
		return temp;
	}

	int GetWeightByIndex(unsigned int index) {
		if (index >= weightNout_count) throw "Incorrect index!\n";
		return weightsNout[index];
	}

	void SetBrand(const char* Brand) {
		if (this->Brand != nullptr)
			delete[] this->Brand;
		int length = strlen(Brand) + 1;
		this->Brand = new char[length];
		strcpy_s(this->Brand, length, Brand);
	}

	string GetBrand() const {
		return string(Brand);
	}

	explicit Laptop(string Brand) : Laptop(Brand.c_str(), 10) {}

	explicit Laptop(int value) : Laptop("NIKITA", value) {}

	explicit Laptop() : Laptop(24) {}

	explicit Laptop(int* ar) : Laptop("NIKITA", 24) {
		weightsNout = ar;
		weightNout_count = _msize(ar) / sizeof(int);
		cout << weightNout_count << "\n";
	}

	Laptop(Laptop& orig) {
		cout << "COPY C-TOR!\n";
		SetBrand(orig.Brand);
		SetHertz(orig.hertz);
	}

	explicit Laptop(const char* Brand, int hertz) {
		SetBrand(Brand);
		SetHertz(hertz);
	}

	void SetHertz(int hertz) {
		this->hertz = hertz;
	}

	int GetHertz() const {
		return hertz;
	}

	void Print() const {
		cout << "Ноутбук " << Brand << ", " << hertz << "\n";
		for (int i = 0; i < weightNout_count; i++) {
			cout << weightsNout[i] << ", ";
		}
		cout << "\n\n";
	}

	~Laptop() {
		if (Brand != nullptr) {
			delete[] Brand;
			Brand = nullptr;
		}
		if (weightsNout != nullptr) {
			delete[] weightsNout;
			weightsNout = nullptr;
		}
	}
};

class Flashlight {
	int* weightsNout = nullptr;
	char* Brand = nullptr;
	int weightNout_count = 0;
	int distance;

public:
	void AddWeights(int* weightsNout, int count) { }

	void AddWeight(int weight) {
		if (weight < 1 || weight > 30)
			throw "Incorrect value.";
		if (weightNout_count == 0) {
			weightsNout = new int[1];
			weightsNout[0] = weight;
		}
		else {
			int* temp = new int[weightNout_count + 1];
			for (int i = 0; i < weightNout_count; i++)
				temp[i] = weightsNout[i];
			temp[weightNout_count] = weight;
			delete[] weightsNout;
			weightsNout = temp;
		}
		weightNout_count++;
	}

	vector<int> GetWeight() const {
		vector<int> temp;
		for (int i = 0; i < weightNout_count; i++)
			temp.push_back(weightsNout[i]);
		return temp;
	}

	int GetWeightByIndex(unsigned int index) {
		if (index >= weightNout_count) throw "Incorrect index!\n";
		return weightsNout[index];
	}

	void SetBrand(const char* Brand) {
		if (this->Brand != nullptr)
			delete[] this->Brand;
		int length = strlen(Brand) + 1;
		this->Brand = new char[length];
		strcpy_s(this->Brand, length, Brand);
	}

	string GetBrand() const {
		return string(Brand);
	}

	explicit Flashlight(string Brand) : Flashlight(Brand.c_str(), 10) {}

	explicit Flashlight(int value) : Flashlight("NIKITA", value) {}

	explicit Flashlight() : Flashlight(24) {}

	explicit Flashlight(int* ar) : Flashlight("NIKITA", 24) {
		weightsNout = ar;
		weightNout_count = _msize(ar) / sizeof(int);
		cout << weightNout_count << "\n";
	}

	Flashlight(Flashlight& orig) {
		cout << "COPY C-TOR!\n";
		SetBrand(orig.Brand);
		SetDistance(orig.distance);
	}

	explicit Flashlight(const char* Brand, int distance) {
		SetBrand(Brand);
		SetDistance(distance);
	}

	void SetDistance(int distance) {
		this->distance = distance;
	}

	int GetDistance() const {
		return distance;
	}

	void Print() const {
		cout << "Фонарик " << Brand << ", " << distance << "\n";
		for (int i = 0; i < weightNout_count; i++) {
			cout << weightsNout[i] << ", ";
		}
		cout << "\n\n";
	}

	~Flashlight() {
		if (Brand != nullptr) {
			delete[] Brand;
			Brand = nullptr;
		}
		if (weightsNout != nullptr) {
			delete[] weightsNout;
			weightsNout = nullptr;
		}
	}
};

class Ps3 {
	int* weightsNout = nullptr;
	char* Model = nullptr;
	int weightNout_count = 0;
	int games;

public:
	void AddWeights(int* weightsNout, int count) { }

	void AddWeight(int weight) {
		if (weight < 1 || weight > 30)
			throw "Incorrect value.";
		if (weightNout_count == 0) {
			weightsNout = new int[1];
			weightsNout[0] = weight;
		}
		else {
			int* temp = new int[weightNout_count + 1];
			for (int i = 0; i < weightNout_count; i++)
				temp[i] = weightsNout[i];
			temp[weightNout_count] = weight;
			delete[] weightsNout;
			weightsNout = temp;
		}
		weightNout_count++;
	}

	vector<int> GetWeight() const {
		vector<int> temp;
		for (int i = 0; i < weightNout_count; i++)
			temp.push_back(weightsNout[i]);
		return temp;
	}

	int GetWeightByIndex(unsigned int index) {
		if (index >= weightNout_count) throw "Incorrect index!\n";
		return weightsNout[index];
	}

	void SetModel(const char* Model) {
		if (this->Model != nullptr)
			delete[] this->Model;
		int length = strlen(Model) + 1;
		this->Model = new char[length];
		strcpy_s(this->Model, length, Model);
	}

	string GetModel() const {
		return string(Model);
	}

	explicit Ps3(string Model) : Ps3(Model.c_str(), 10) {}

	explicit Ps3(int value) : Ps3("NIKITA", value) {}

	explicit Ps3() : Ps3(24) {}

	explicit Ps3(int* ar) : Ps3("NIKITA", 24) {
		weightsNout = ar;
		weightNout_count = _msize(ar) / sizeof(int);
		cout << weightNout_count << "\n";
	}

	Ps3(Ps3& orig) {
		cout << "COPY C-TOR!\n";
		SetModel(orig.Model);
		SetGames(orig.games);
	}

	explicit Ps3(const char* Model, int games) {
		SetModel(Model);
		SetGames(games);
	}

	void SetGames(int games) {
		this->games = games;
	}

	int GetGames() const {
		return games;
	}

	void Print() const {
		cout << "ПС3 " << Model << ", " << games << "\n";
		for (int i = 0; i < weightNout_count; i++) {
			cout << weightsNout[i] << ", ";
		}
		cout << "\n\n";
	}

	~Ps3() {
		if (Model != nullptr) {
			delete[] Model;
			Model = nullptr;
		}
		if (weightsNout != nullptr) {
			delete[] weightsNout;
			weightsNout = nullptr;
		}
	}
};

class GrannyGame {
	int* weightsNout = nullptr;
	char* Name = nullptr;
	int weightNout_count = 0;
	int years;

public:
	void AddWeights(int* weightsNout, int count) { }

	void AddWeight(int weight) {
		if (weight < 1 || weight > 30)
			throw "Incorrect value.";
		if (weightNout_count == 0) {
			weightsNout = new int[1];
			weightsNout[0] = weight;
		}
		else {
			int* temp = new int[weightNout_count + 1];
			for (int i = 0; i < weightNout_count; i++)
				temp[i] = weightsNout[i];
			temp[weightNout_count] = weight;
			delete[] weightsNout;
			weightsNout = temp;
		}
		weightNout_count++;
	}

	vector<int> GetWeight() const {
		vector<int> temp;
		for (int i = 0; i < weightNout_count; i++)
			temp.push_back(weightsNout[i]);
		return temp;
	}

	int GetWeightByIndex(unsigned int index) {
		if (index >= weightNout_count) throw "Incorrect index!\n";
		return weightsNout[index];
	}

	void SetName(const char* Name) {
		if (this->Name != nullptr)
			delete[] this->Name;
		int length = strlen(Name) + 1;
		this->Name = new char[length];
		strcpy_s(this->Name, length, Name);
	}

	string GetName() const {
		return string(Name);
	}

	explicit GrannyGame(string Name) : GrannyGame(Name.c_str(), 10) {}

	explicit GrannyGame(int value) : GrannyGame("NIKITA", value) {}

	explicit GrannyGame() : GrannyGame(24) {}

	explicit GrannyGame(int* ar) : GrannyGame("NIKITA", 24) {
		weightsNout = ar;
		weightNout_count = _msize(ar) / sizeof(int);
		cout << weightNout_count << "\n";
	}

	GrannyGame(GrannyGame& orig) {
		cout << "COPY C-TOR!\n";
		SetName(orig.Name);
		SetYears(orig.years);
	}

	explicit GrannyGame(const char* Name, int years) {
		SetName(Name);
		SetYears(years);
	}

	void SetYears(int years) {
		this->years = years;
	}

	int GetYears() const {
		return years;
	}

	void Print() const {
		cout << "Бабка " << Name << ", " << years << "\n";
		for (int i = 0; i < weightNout_count; i++) {
			cout << weightsNout[i] << ", ";
		}
		cout << "\n\n";
	}

	~GrannyGame() {
		if (Name != nullptr) {
			delete[] Name;
			Name = nullptr;
		}
		if (weightsNout != nullptr) {
			delete[] weightsNout;
			weightsNout = nullptr;
		}
	}
};

int main()
{
	setlocale(0, "");
	/*Desklamp ori;
	ori.SetBrand("Philips");
	ori.SetBrightness(100);
	Desklamp copy = ori;
	copy.Print();*/

	/*Laptop orig;
	orig.SetBrand("hp");
	orig.SetHertz(4);
	Laptop copy = orig;
	copy.Print();*/

	/*Flashlight origin;
	origin.SetBrand("Yajia");
	origin.SetDistance(4);
	Flashlight copy = origin;
	copy.Print();*/

	/*Ps3 origina;
	origina.SetModel("Slim");
	origina.SetGames(3);
	Ps3 copy = origina;
	copy.Print();*/

	GrannyGame original;
	original.SetName("Zina");
	original.SetYears(70);
	GrannyGame copy = original;
	copy.Print();
}
