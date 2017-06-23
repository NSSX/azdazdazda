#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

		MutantStack<T>(void){
			return;
		}
		virtual ~MutantStack<T>(void){
			return;
		}
		MutantStack<T>(MutantStack<T> const &src);
		MutantStack<T>	&operator=(MutantStack<T> const &rhs);
		class iterator {
			public:

				T *pointeur;
				//var
				size_t	index;
				MutantStack	&myMutantStack;
				//MutantStack *myMutantStack; //it works with pointer too

				//Constructeur Destructeur
				iterator(void);
				virtual ~iterator(void)
				{
					return;
				}
				//DEFERENCEMENT
				// using std::stack<char>::c; // expose the container
				T &operator*() {
					 return myMutantStack.c[index];
				 }

				//ALL OPERATOR INCREMENTATION
				iterator	&operator--() {
					if (index > 0)
						index--;
					return (*this);
				}
				iterator	&operator++() {
					if (index < myMutantStack.size())
						index++;
					return (*this);
				}
				//COMPARAISON
				bool		operator!=(iterator const &rhs) {
					if(index != rhs.index)
						return true;
					else
						return false;
				}
				bool		operator==(iterator const &rhs) {
					if(index == rhs.index)
						return true;
					else
						return false;
				}
				bool		operator<(iterator const &rhs) {
					if(index < rhs.index)
						return true;
					else
						return false;
				}
				bool		operator>(iterator const &rhs) {
					if(index > rhs.index)
						return true;
					else
						return false;
				}
				bool		operator<=(iterator const &rhs) {
					if(index <= rhs.index)
						return true;
					else
						return false;
				}
				bool		operator>=(iterator const &rhs) {
					if(index >= rhs.index)
						return true;
					else
						return false;
				}

				iterator(MutantStack &mmStack, int index) : index(index), myMutantStack(mmStack)
				{
					return;
				}
				iterator	&operator=(iterator const &rhs);
				iterator(iterator const &rhs) : index(rhs.index), myMutantStack(rhs.myMutantStack)
				{
					return;
				}
		};



	iterator	begin()
	{
		iterator newIterator(*this, 0);
		return (newIterator);
	}

	iterator	end()
	{
		iterator newIterator(*this, this->size());
		return (newIterator);
	}
};

#endif
