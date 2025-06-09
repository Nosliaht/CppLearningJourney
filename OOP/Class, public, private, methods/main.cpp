#include <iostream>
#include <string>
#include <limits>

void clearScreen()
{
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}

class Airplane
{
public:
  std::string model;
  int current_velocity;
  int cruising_velocity;
  int max_velocity;
  int autonomy[2];
};

int main()
{
  bool running = true;
  int lastDisplayedModelOption = 0;

  Airplane *ERJ_145 = new Airplane();
  ERJ_145->model = "ERJ-145";
  ERJ_145->current_velocity = 0;
  ERJ_145->cruising_velocity = 750;
  ERJ_145->max_velocity = 830;
  ERJ_145->autonomy[0] = 3706;
  ERJ_145->autonomy[1] = 4260;

  Airplane *E175_E2 = new Airplane();
  E175_E2->model = "E175-E2";
  E175_E2->current_velocity = 0;
  E175_E2->cruising_velocity = 830;
  E175_E2->max_velocity = 870;
  E175_E2->autonomy[0] = 3900;
  E175_E2->autonomy[1] = 4500;

  Airplane *E190_E2 = new Airplane();
  E190_E2->model = "E190-E2";
  E190_E2->current_velocity = 0;
  E190_E2->cruising_velocity = 870;
  E190_E2->max_velocity = 900;
  E190_E2->autonomy[0] = 5300;
  E190_E2->autonomy[1] = 5800;

  Airplane *E195_E2 = new Airplane();
  E195_E2->model = "E195-E2";
  E195_E2->current_velocity = 0;
  E195_E2->cruising_velocity = 870;
  E195_E2->max_velocity = 900;
  E195_E2->autonomy[0] = 4800;
  E195_E2->autonomy[1] = 5400;

  Airplane *Legacy_650 = new Airplane();
  Legacy_650->model = "Legacy 650";
  Legacy_650->current_velocity = 0;
  Legacy_650->cruising_velocity = 850;
  Legacy_650->max_velocity = 870;
  Legacy_650->autonomy[0] = 7223;
  Legacy_650->autonomy[1] = 7800;

  do
  {
    std::cout << "Airplane Model \n"
              << "1. ERJ-145 \n"
              << "2. E175-E2 \n"
              << "3. E190-E2 \n"
              << "4. E195-E2 \n"
              << "5. Legacy 650 \n"
              << "6. Exit and Close Program \n"
              << "Choose a Model: ";

    int input;
    std::cin >> input;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if ((input >= 1 && input <= 5) && (input != lastDisplayedModelOption))
    {
      clearScreen();
      std::cout << "Airplane Model \n"
                << "1. ERJ-145 \n"
                << "2. E175-E2 \n"
                << "3. E190-E2 \n"
                << "4. E195-E2 \n"
                << "5. Legacy 650 \n"
                << "6. Exit and Close Program \n"
                << "Choose a Model: " << input << "\n";
    }
    else if (input != 6)
    {
      std::cout << "\n";
    }

    switch (input)
    {
    case 1:
      std::cout << "Model: " << ERJ_145->model << "\n";
      for (ERJ_145->current_velocity = 0; ERJ_145->current_velocity <= ERJ_145->max_velocity; ERJ_145->current_velocity += 10)
      {
        std::cout << "\rCurrent Velocity: " << ERJ_145->current_velocity << " km/h    ";
      }
      std::cout << "\n";
      std::cout << "Cruising Velocity: " << ERJ_145->cruising_velocity << " km/h\n";
      std::cout << "Max Velocity: " << ERJ_145->max_velocity << " km/h\n";
      std::cout << "Min Autonomy: " << ERJ_145->autonomy[0] << " km\n";
      std::cout << "Max Autonomy: " << ERJ_145->autonomy[1] << " km\n";
      lastDisplayedModelOption = input;
      break;
    case 2:
      std::cout << "Model: " << E175_E2->model << "\n";
      for (E175_E2->current_velocity = 0; E175_E2->current_velocity <= E175_E2->max_velocity; E175_E2->current_velocity += 10)
      {
        std::cout << "\rCurrent Velocity: " << E175_E2->current_velocity << " km/h    ";
      }
      std::cout << "\n";
      std::cout << "Cruising Velocity: " << E175_E2->cruising_velocity << " km/h\n";
      std::cout << "Max Velocity: " << E175_E2->max_velocity << " km/h\n";
      std::cout << "Min Autonomy: " << E175_E2->autonomy[0] << " km\n";
      std::cout << "Max Autonomy: " << E175_E2->autonomy[1] << " km\n";
      lastDisplayedModelOption = input;
      break;
    case 3:
      std::cout << "Model: " << E190_E2->model << "\n";
      for (E190_E2->current_velocity = 0; E190_E2->current_velocity <= E190_E2->max_velocity; E190_E2->current_velocity += 10)
      {
        std::cout << "\rCurrent Velocity: " << E190_E2->current_velocity << " km/h    ";
      }
      std::cout << "\n";
      std::cout << "Cruising Velocity: " << E190_E2->cruising_velocity << " km/h\n";
      std::cout << "Max Velocity: " << E190_E2->max_velocity << " km/h\n";
      std::cout << "Min Autonomy: " << E190_E2->autonomy[0] << " km\n";
      std::cout << "Max Autonomy: " << E190_E2->autonomy[1] << " km\n";
      lastDisplayedModelOption = input;
      break;
    case 4:
      std::cout << "Model: " << E195_E2->model << "\n";
      for (E195_E2->current_velocity = 0; E195_E2->current_velocity <= E195_E2->max_velocity; E195_E2->current_velocity += 10)
      {
        std::cout << "\rCurrent Velocity: " << E195_E2->current_velocity << " km/h    ";
      }
      std::cout << "\n";
      std::cout << "Cruising Velocity: " << E195_E2->cruising_velocity << " km/h\n";
      std::cout << "Max Velocity: " << E195_E2->max_velocity << " km/h\n";
      std::cout << "Min Autonomy: " << E195_E2->autonomy[0] << " km\n";
      std::cout << "Max Autonomy: " << E195_E2->autonomy[1] << " km\n";
      lastDisplayedModelOption = input;
      break;
    case 5:
      std::cout << "Model: " << Legacy_650->model << "\n";
      for (Legacy_650->current_velocity = 0; Legacy_650->current_velocity <= Legacy_650->max_velocity; Legacy_650->current_velocity += 10)
      {
        std::cout << "\rCurrent Velocity: " << Legacy_650->current_velocity << " km/h    ";
      }
      std::cout << "\n";
      std::cout << "Cruising Velocity: " << Legacy_650->cruising_velocity << " km/h\n";
      std::cout << "Max Velocity: " << Legacy_650->max_velocity << " km/h\n";
      std::cout << "Min Autonomy: " << Legacy_650->autonomy[0] << " km\n";
      std::cout << "Max Autonomy: " << Legacy_650->autonomy[1] << " km\n";
      lastDisplayedModelOption = input;
      break;
    case 6:
      running = false;
      std::cout << "Exiting program. Goodbye!\n";
      break;
    default:
      std::cout << "Invalid option. Please choose a valid number.\n";
      break;
    }

    if (running)
    {
      std::cout << "\nPress Enter to continue...";
      std::cin.get();
      clearScreen();
    }

  } while (running);

  delete ERJ_145;
  ERJ_145 = nullptr;

  delete E175_E2;
  E175_E2 = nullptr;

  delete E190_E2;
  E190_E2 = nullptr;

  delete E195_E2;
  E195_E2 = nullptr;

  delete Legacy_650;
  Legacy_650 = nullptr;

  return 0;
}
