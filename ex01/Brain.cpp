#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdeas(std::string idea)
{
    static int idea_index = 0;
    if(idea_index == 100)
        idea_index = 0;
    this->ideas[idea_index] = idea;
    idea_index++;
}

std::string Brain::getIdeas(int index) const
{
    return (this->ideas[index]);
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = copy.ideas[i];
        }
    }
    return (*this);
}

