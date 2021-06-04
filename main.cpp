#include "RobotKRSRI.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    RobotKRSRI robot;
    robot.nyala();
    robot.jalan();
    robot.padamkanApi();
    robot.ambilBoneka();

    robot.mati();
    robot.jalan(); // mengeluarkan pesan error
    robot.padamkanApi(); // mengeluarkan pesan error
    robot.ambilBoneka(); // mengeluarkan pesan error

    // bonus
    Boneka teddyBear;
    robot.ambilBoneka(teddyBear);
    return 0;
}