#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP
# include <stack>
# include <vector>
# include <iostream>

template <typename T>
class  MutantStack : public std::stack <T> 
{
	private:
        
	public:
		typedef typename std::stack<T>::container_type container_type;
		typedef typename container_type::iterator iterator;
		
		iterator	begin(void) {return(this->c.begin());}
		iterator	end(void) {return(this->c.end());}
		
		MutantStack() {};
		MutantStack(MutantStack &copy) : std::stack<T>(copy){};
		MutantStack & operator = ( MutantStack const & value ) {(this->c = value->c());}
		
		virtual ~ MutantStack() {};
	
};

#endif