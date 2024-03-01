#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
    try{
        Bureaucrat Harvey("Harvey", 140);
        Form form34("form34", 140, 141);
        Harvey.signForm(form34);
        Harvey.increaseGrade();
        Harvey.signForm(form34);

        std::cout << std::endl;

        Bureaucrat Mark("Mark", 129);
        Form form90("form90", 10, 129);
        Mark.signForm(form90);
        Mark.decreaseGrade();
        Mark.signForm(form90);
    }
    catch(Form::GradeTooLowException & e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Form::GradeTooHighException & e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}