#include "RAID/FileManager.h"
#include "RAID/RAIDManager.h"

#include <string>
#include <thread>

int main() {
    RAIDManager rm;

    // /*

    rm.saveFile("MOON", "100100101001100111011100101101011101101101100010");
    rm.saveFile("EARTH", "100100101010100101101100101101011101101101100010");
    rm.saveFile("SUN", "110110101001100110000101101101010101101101100010");

    std::this_thread::sleep_for(std::chrono::seconds(15));  // CHECK IF FILES AND BACKUP IDs WERE CREATED

    std::cout << "EARTH: " << rm.getFile("EARTH") << std::endl;
    std::cout << "MOON: " << rm.getFile("MOON") << std::endl;
    std::cout << "SUN: " << rm.getFile("SUN") << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(10)); // CHECK FOR THE GET FILE

    rm.deleteFile("MOON");

    std::this_thread::sleep_for(std::chrono::seconds(20)); // CHECK IF THE FILE WAS DELETED AND TAKE DOWN A DISK

    std::cout << "SUN: " << rm.getFile("SUN") << std::endl;

    rm.deleteFile("SUN");

    // */

    rm.deleteFile("EARTH");

    return 0;
}