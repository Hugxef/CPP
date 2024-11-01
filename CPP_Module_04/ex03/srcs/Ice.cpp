#include "Ice.hpp"

Ice::Ice( void ): AMateria("ice")
{
	/* this->type = "ice"; */
	std::cout << "Default constructor for Ice called" << std::endl;
	return;
}

Ice::Ice( Ice const & src ): AMateria("ice")
{
	std::cout << "Copy constructor for Ice called" << std::endl;
	*this = src;
	return;
}

Ice::~Ice( void )
{
	std::cout << "Destructor for Ice called" << std::endl;
	return;
}

Ice	&Ice::operator=( const Ice &other )
{
	this->_type = other._type;
	std::cout << "Assignation operator for Ice called" << std::endl;
	return *this;
}

AMateria	*Ice::clone( void ) const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
		<< std::endl;
}
