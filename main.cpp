#include <iostream>
#include <vector>

#include "example.hpp"

int main()
{
    std::vector<student> students;

    students.push_back(student("Harry", "Potter", 1));
    students.push_back(student("Ron", "Weasley", 2));
    students.push_back(student("Hermione", "Granger", 3));

		students[0].set_first_name("tEST");
		
    for (const auto& s : students) {
        std::cout << s << '\n';
    }
}