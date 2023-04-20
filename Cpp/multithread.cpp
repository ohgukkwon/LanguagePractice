#include <iostream>
//using namespace std;
#include <string>
#include <thread>
#include <map>
#include <chrono>
using namespace std::chrono_literals;

//refresh wrather forcast every 2seconds

void RefreshForecast( std::map<std::string, int> forecastMap)
{
    //while syntax forecastMap every 2 seconds
    while(true){
    for (auto item : forecastMap)
    {
        item.second ++;
        std::cout << item.first << " " << item.second << std::endl;
    }
    //thread seep 2 seconds
    //this_thread::sleep_for(2000ms);
    std::this_thread::sleep_for(2000ms);
    }
}

int main()
{
    std::map<std::string, int> forecastMap = {
        {"Tracy", 10},
        {"San Jose", 15},
        {"Mountain Hill", 20},
        {"Stockton", 25}
    };
    
    std::thread bgWorker(RefreshForecast, forecastMap);

    system("pause>0");
}
