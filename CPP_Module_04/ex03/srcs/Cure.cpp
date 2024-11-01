#include "Cure.hpp"

Cure::Cure( void ): AMateria("cure")
{
	/* this->type = "cure"; */
	std::cout << "Default constructor for Cure called" << std::endl;
	return;
}

Cure::Cure( Cure const & src ): AMateria("cure")
{
	std::cout << "Copy constructor for Cure called" << std::endl;
	*this = src;
	return;
}

Cure::~Cure( void )
{
	std::cout << "Destructor for Cure called" << std::endl;
	return;
}

Cure	&Cure::operator=( const Cure &other )
{
	this->_type = other._type;
	std::cout << "Assignation operator for Cure called" << std::endl;
	return *this;
}

AMateria	*Cure::clone( void ) const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
