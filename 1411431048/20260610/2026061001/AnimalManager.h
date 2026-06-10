#pragma once
#include <string>

class AnimalManager {
public:
    
    AnimalManager(const std::string& fileName);

    
    void writeAnimalData(int count);

    
    void readAndDisplayData();

private:
    std::string m_fileName; 
};
