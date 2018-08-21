//
// Created by Tristan Brindle on 01/11/2017.
//

#ifndef MEMBER_ACCESS_EXAMPLE_HPP
#define MEMBER_ACCESS_EXAMPLE_HPP

#include <iostream>
#include <string>

#include <cctype>
#include <clocale>

class student {
	public:
		student(const std::string& first, const std::string& last, int id)
			: first_name{first}, last_name{last}, id_number{id}
		{}
		
		const std::string& get_first_name() const {return first_name;}
		const std::string& get_last_name() const {return last_name;}
		int get_id_number() const {return id_number;}

		void set_first_name(const std::string& first)
		{
			first_name = first;
			first_name[0] = toupper(first_name[0]);
			for(size_t i=1; i < first_name.length(); ++i)
			{
				first_name[i] = tolower(first_name[i]);
			}
		}

	private:
		friend std::ostream& operator<<(std::ostream& os, const student& s);
	
    std::string first_name;
    std::string last_name;
    int id_number;
};

std::ostream& operator<<(std::ostream& os, const student& s);

#endif //MEMBER_ACCESS_EXAMPLE_HPP
