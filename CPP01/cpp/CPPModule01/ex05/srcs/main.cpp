
#include "Harl.hpp"

/* Simple main function to showcase Harl class */
int main(void)
{
	Harl	harl;

	harl.complain("INVALID");
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("INVALID");
	return (0);
}
