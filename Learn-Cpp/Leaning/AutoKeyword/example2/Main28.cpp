#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

std::string getName() {
	return "Cherno";
}

class Device {};

class DeviceManager {
private:
	std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
	const auto& getDevices() const {
		return m_Devices;
	}
};

int main() {
	std::vector<std::string> strings;
	strings.push_back("Apple");
	strings.push_back("Orange");
	/*
	for (std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++) {
		std::cout << *it << std::endl;
	}
	*/
	for (auto it = strings.begin(); it != strings.end(); it++) {
		std::cout << *it << std::endl;
	}

	// using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;
	typedef std::unordered_map<std::string, std::vector<Device*>> DeviceMap;
	
	DeviceManager dm;
	const DeviceMap& devices = dm.getDevices();

	std::cin.get();
	return 0;
}