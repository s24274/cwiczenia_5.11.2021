#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int

{
	if (argc == 0)
	{
	return 1;
	}
	
	if (argc != 0)
	{
	
		auto const szerokosc = std::stoi(argv[1]);
		
    
		for (int i = 0; i <= szerokosc; i++)
			{

				for (int j = 1; j <= i; j++)
				{
				std::cout << "*";
				}
				std::cout << "\n";
			}
	}

return 0;
}

