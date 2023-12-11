#include <iostream>
#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &copy);
    ~Brain();
    void setIdeas(std::string idea);
    std::string getIdeas(int index) const;
};

#endif