#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <memory>
#include "Airplane.h"

void clearScreen()
{
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}

int main()
{
  std::vector<std::unique_ptr<Airplane>> airplanes;

  airplanes.push_back(std::make_unique<Airplane>());
  airplanes.back()->model = "ERJ-145";
  airplanes.back()->current_velocity = 0;
  airplanes.back()->cruising_velocity = 750;
  airplanes.back()->max_velocity = 830;
  airplanes.back()->autonomy[0] = 3706;
  airplanes.back()->autonomy[1] = 4260;

  airplanes.push_back(std::make_unique<Airplane>());
  airplanes.back()->model = "E175-E2";
  airplanes.back()->current_velocity = 0;
  airplanes.back()->cruising_velocity = 830;
  airplanes.back()->max_velocity = 870;
  airplanes.back()->autonomy[0] = 3900;
  airplanes.back()->autonomy[1] = 4500;

  airplanes.push_back(std::make_unique<Airplane>());
  airplanes.back()->model = "E190-E2";
  airplanes.back()->current_velocity = 0;
  airplanes.back()->cruising_velocity = 870;
  airplanes.back()->max_velocity = 900;
  airplanes.back()->autonomy[0] = 5300;
  airplanes.back()->autonomy[1] = 5800;

  airplanes.push_back(std::make_unique<Airplane>());
  airplanes.back()->model = "E195-E2";
  airplanes.back()->current_velocity = 0;
  airplanes.back()->cruising_velocity = 870;
  airplanes.back()->max_velocity = 900;
  airplanes.back()->autonomy[0] = 4800;
  airplanes.back()->autonomy[1] = 5400;

  airplanes.push_back(std::make_unique<Airplane>());
  airplanes.back()->model = "Legacy 650";
  airplanes.back()->current_velocity = 0;
  airplanes.back()->cruising_velocity = 850;
  airplanes.back()->max_velocity = 870;
  airplanes.back()->autonomy[0] = 7223;
  airplanes.back()->autonomy[1] = 7800;

  bool running = true;
  int input;

  do
  {
    clearScreen();

    std::cout << "Airplane Model \n";
    for (size_t i = 0; i < airplanes.size(); ++i)
    {
      std::cout << i + 1 << ". " << airplanes[i]->model << " \n";
    }
    std::cout << airplanes.size() + 1 << ". Exit and Close Program \n";
    std::cout << "Choose a Model: ";

    std::cin >> input;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (input >= 1 && input <= static_cast<int>(airplanes.size()))
    {
      Airplane *selectedAirplane = airplanes[input - 1].get();

      clearScreen();
      std::cout << "Airplane Model \n";
      for (size_t i = 0; i < airplanes.size(); ++i)
      {
        std::cout << i + 1 << ". " << airplanes[i]->model << " \n";
      }
      std::cout << static_cast<int>(airplanes.size()) + 1 << ". Exit and Close Program \n";
      std::cout << "Choose a Model: " << input << "\n\n";

      std::cout << "Model: " << selectedAirplane->model << "\n";

      for (selectedAirplane->current_velocity = 0;
           selectedAirplane->current_velocity <= selectedAirplane->max_velocity;
           selectedAirplane->current_velocity += 10)
      {
        std::cout << "\rCurrent Velocity: " << selectedAirplane->current_velocity << " km/h    ";
      }
      std::cout << "\n";

      std::cout << "Cruising Velocity: " << selectedAirplane->cruising_velocity << " km/h\n";
      std::cout << "Max Velocity: " << selectedAirplane->max_velocity << " km/h\n";
      std::cout << "Min Autonomy: " << selectedAirplane->autonomy[0] << " km\n";
      std::cout << "Max Autonomy: " << selectedAirplane->autonomy[1] << " km\n";
    }

    else if (input == static_cast<int>(airplanes.size()) + 1)
    {
      running = false;
      std::cout << "Exiting program. Goodbye!\n";
    }
    else
    {
      std::cout << "Invalid option. Please choose a valid number.\n";
    }

    if (running)
    {
      std::cout << "\nPress Enter to continue...";
      std::cin.get();
    }

  } while (running);

  return 0;
}
