#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    //std::cout << "ShrubberyCreationForm Default constructor\n";
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), _Target(target)
{
    //std::cout << this->getName() << " constructor\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& srcObj)
{
    if (this != &srcObj)
    {
        this->setSigne(srcObj.isSigned());
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << this->getName() << " Deconstructor\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getExecGrade() || !this->isSigned())
    {
        std::cout << this->getName() << " cannot be executed because ";
        if (executor.getGrade() > this->getExecGrade())
            throw Form::GradeTooLowException();
        throw Form::notSignedException();
    }
    std::ofstream output;
    output.open(this->_Target + "_shrubbery");
    output << "                  * * \n";
    output << "           *    *  *  \n";
    output << "      *  *    *     *  * \n";
    output << "     *     *    *  *    * \n";
    output << " * *   *    *    *    *   * \n";
    output << " *     *  *    * * .#  *   * \n";
    output << " *   *     * #.  .# *   * \n";
    output << "  *     \"#.  #: #\" * *    * \n";
    output << " *   * * \"#. ##\"       * \n";
    output << "   *       \"### \n";
    output << "             \"## \n";
    output << "              ##. \n";
    output << "              .##: \n";
    output << "              :### \n";
    output << "              ;### \n";
    output << "            ,####. \n";
    output << "/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\ \n";
    output.close();
}
