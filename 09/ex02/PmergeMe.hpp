//
// Created by lbattest on 4/11/23.
//

#ifndef CPP_PMERGEME_H
#define CPP_PMERGEME_H
#include <iostream>
#include <climits>
#include <deque>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cstdlib>

#define K 5
class PmergeMe {
	public:
		PmergeMe();
		PmergeMe(PmergeMe const &rhs);
		PmergeMe &operator=(PmergeMe const &rhs);
		~PmergeMe();

		bool parsing(char **argv);
		void sort();
		void print(clock_t Tvector, clock_t Tdeque);

		void insertionSortDeque(std::deque<int> d1, int p, int q);
		void mergeDeque(std::deque<int> d1, int p, int q, int r);
		void sortDeque(std::deque<int> d1, int p, int r);

		void insertionSortVector(std::vector<int> v1, int p, int q);
		void mergeVector(std::vector<int> v1, int p, int q, int r);
		void sortVector(std::vector<int> v1, int p, int r);
	private:
		std::deque<int> _deque;
		std::vector<int> _vector;

};
#endif //CPP_PMERGEME_H
