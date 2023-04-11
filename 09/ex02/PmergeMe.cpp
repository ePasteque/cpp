//
// Created by lbattest on 4/11/23.
//

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &rhs) {
	*this = rhs;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
	_deque = rhs._deque;
	_vector = rhs._vector;
	return *this;
}

PmergeMe::~PmergeMe() {}

bool PmergeMe::parsing(char **argv) {
	for (int i = 1; argv[i]; i++) {
		for (int j = 0; argv[i][j]; j++) {
			if (!isdigit(argv[i][j]) && argv[i][j] != '-') {
				std::cout << "Error: there can only be number in the input\n";
				return false;
			}
		}
		long int tmp = std::atol(argv[i]);
		if (tmp < 0 || tmp > INT_MAX) {
			std::cout << "Error each number must be between 0 and 2147483647\n";
			return false;
		}
		_deque.push_back(static_cast<int>(tmp));
		_vector.push_back(static_cast<int>(tmp));
	}
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++) {
		for (std::vector<int>::iterator it2 = it + 1; it2 != _vector.end(); it2++) {
			if (*it == *it2) {
				std::cout << "Error: no duplicates allowed\n";
				return false;
			}
		}
	}
	return true;
}

// fonctions sort for Deque
void PmergeMe::insertionSortDeque(std::deque<int> d1, int p, int q) {
	for (int i = p; i < q; i++) {
		int tempVal = d1[i + 1];
		int j = i + 1;
		while (j > p && d1[j - 1] > tempVal) {
			d1[j] = d1[j - 1];
			j--;
		}
		d1[j] = tempVal;
	}
}

void PmergeMe::mergeDeque(std::deque<int> d1, int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;
	int Llist[n1], Rlist[n2];
	for(int i = 0; i < n1; i++) {
		Llist[i] = d1[p + 1];
	}
	for (int i = 0; i < n2; i++) {
		Rlist[i] = d1[q + i + 1];
	}
	int RIDX = 0;
	int LIDX = 0;
	for (int i = p; i < r - p + 1; i++) {
		if (RIDX == n2) {
			d1[i] = Llist[LIDX];
			LIDX++;
		} else if (LIDX == n1) {
			d1[i] = Rlist[RIDX];
			RIDX++;
		} else if (Rlist[RIDX] > Llist[LIDX]) {
			d1[i] = Llist[LIDX];
			LIDX++;
		} else {
			d1[i] = Rlist[RIDX];
			RIDX++;
		}
	}
}

void PmergeMe::sortDeque(std::deque<int> d1, int p, int r) {
	if (r - p > K) {
		int q = (p + r) / 2;
		sortDeque(d1, p, q);
		sortDeque(d1, q + 1, r);
		mergeDeque(d1, p, q, r);
	} else {
		insertionSortDeque(d1, p, r);
	}
}

// fonctions sort for Vector
void PmergeMe::insertionSortVector(std::vector<int> v1, int p, int q) {
	for (int i = p; i < q; i++) {
		int tempVal = v1[i + 1];
		int j = i + 1;
		while (j > p && v1[j - 1] > tempVal) {
			v1[j] = v1[j - 1];
			j--;
		}
		v1[j] = tempVal;
	}
}

void PmergeMe::mergeVector(std::vector<int> v1, int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;
	int Llist[n1], Rlist[n2];
	for(int i = 0; i < n1; i++) {
		Llist[i] = v1[p + 1];
	}
	for (int i = 0; i < n2; i++) {
		Rlist[i] = v1[q + i + 1];
	}
	int RIDX = 0;
	int LIDX = 0;
	for (int i = p; i < r - p + 1; i++) {
		if (RIDX == n2) {
			v1[i] = Llist[LIDX];
			LIDX++;
		} else if (LIDX == n1) {
			v1[i] = Rlist[RIDX];
			RIDX++;
		} else if (Rlist[RIDX] > Llist[LIDX]) {
			v1[i] = Llist[LIDX];
			LIDX++;
		} else {
			v1[i] = Rlist[RIDX];
			RIDX++;
		}
	}
}

void PmergeMe::sortVector(std::vector<int> v1, int p, int r) {
	if (r - p > K) {
		int q = (p + r) / 2;
		sortVector(v1, p, q);
		sortVector(v1, q + 1, r);
		mergeVector(v1, p, q, r);
	} else {
		insertionSortVector(v1, p, r);
	}
}

void PmergeMe::sort() {
	clock_t Tvector, Tdeque;
	Tdeque = clock();
	sortDeque(_deque, 0, _deque.size());
	Tdeque = clock() - Tdeque;

	Tvector = clock();
	sortVector(_vector, 0, _vector.size());
	Tvector = clock() - Tvector;
	print(Tvector, Tdeque);
}

void PmergeMe::print(clock_t Tvector, clock_t Tdeque) {
	std::cout << "Deque after sort : ";
	for (std::deque<int>::iterator it = _deque.begin(); it != _deque.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to sort " << _deque.size() << " elements with std::deque: " << static_cast<float>(Tdeque) / CLOCKS_PER_SEC * 1000 << " ms" << std::endl;
	std::cout << "Vector after sort : ";
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to sort " << _vector.size() << " elements with std::vector: " << static_cast<float>(Tvector) / CLOCKS_PER_SEC * 1000 << " ms" << std::endl;
}