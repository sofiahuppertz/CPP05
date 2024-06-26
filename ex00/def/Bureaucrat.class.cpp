#include "../dec/Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat( void ): name("Default"), grade(150)
{
    return;
}

Bureaucrat::Bureaucrat( std::string _name, int _grade): name(_name)
{
    if ( _grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    if ( _grade > 150 )
    {
        throw Bureaucrat::GradeTooLowException();
    }
    grade = _grade;
    return;
}

Bureaucrat::Bureaucrat (const Bureaucrat &other): name(other.name), grade(other.grade)
{
    return;
}

Bureaucrat::~Bureaucrat( void )
{
    return;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        grade = other.grade;
    }
    return *this;
}

std::string Bureaucrat::getName( void )  const
{
    return name;

}

int Bureaucrat::getGrade( void ) const
{
    return grade;
}

void Bureaucrat::incrementGrade( int amount )
{
    if ( grade - amount < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    grade -= amount;
    return;
}

void Bureaucrat::decrementGrade( int amount )
{
    if (grade + amount > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    grade += amount;
    return;
}

// Operator overload
std::ostream& operator<< (std::ostream& os, const Bureaucrat &object)
{
    os << ANSIColors::BLUE << object.getName() << ANSIColors::GREEN << ", bureaucrat grade " << ANSIColors::BLUE << object.getGrade() <<  ANSIColors::GREEN << "." << ANSIColors::RESET;
    return os;
}

// Exceptions

const char *Bureaucrat::GradeTooHighException::what()const throw()
{
    return   "Doesn't have a low enough grade. (too high)" ;
}

const char *Bureaucrat::GradeTooLowException::what()const throw()
{
    return "Doesn't have a high enough grade. (too low)";
}