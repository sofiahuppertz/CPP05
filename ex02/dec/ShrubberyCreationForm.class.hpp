#ifndef SHRUBBERYCREATIONFORM_CLASS_H
# define SHRUBBERYCREATIONFORM_CLASS_H

#include "AForm.class.hpp"

class ShrubberyCreationForm : public AForm {

    public:

        ShrubberyCreationForm(std::string _target);
        ShrubberyCreationForm(ShrubberyCreationForm const &other);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
        virtual ~ShrubberyCreationForm( void );
        virtual void local_execute(Bureaucrat const &executor) const;
        virtual void local_failure( void ) const;

    private:
        ShrubberyCreationForm( void );
};

# endif