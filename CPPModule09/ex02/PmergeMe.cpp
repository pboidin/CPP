#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) {
	*this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
	if (this != &other) {
		vector = other.vector;
		list = other.list;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::InsertionSortVector(std::vector<int> &vector, int left, int right) {
	for (int i = left + 1; i <= right; ++i) {
		int key = vector[i];
		int j = i - 1;

		while (j >= left && vector[j] > key) {
			vector[j+1] = vector[j];
			j--;
		}
		vector[j+1] = key;
	}
}

void PmergeMe::MergeVector(std::vector<int> &vector, int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;

	std::vector<int> L(n1), R(n2);

	for (int i = 0; i < n1; ++i) {
		L[i] = vector[left + i];
	}

	for (int j = 0; j < n2; ++j) {
		R[j] = vector[mid + 1 + j];
	}

	int i = 0, j = 0, k = left;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			vector[k] = L[i];
			i++;
		} else {
			vector[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		vector[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		vector[k] = R[j];
		j++;
		k++;
	}
}

void PmergeMe::SortVector(std::vector<int> &vector, int left, int right, int k) {
	if (left < right) {
		if (right - left + 1 <= k)
			InsertionSortVector(vector, left, right);
        else {
			int mid = left + (right - left) / 2;
			SortVector(vector, left, mid, k);
			SortVector(vector, mid+1, right, k);
			MergeVector(vector, left, mid, right);
		}
	}
}

int PmergeMe::CheckIsNum(char *str) {
	int i = 0;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return 0;
		i++;
	}
	return 1;
}

std::list<int> PmergeMe::MergeList(std::list<int> &left, std::list<int> &right) {
	std::list<int> result;

	while (!left.empty() && !right.empty()) {
    	if (left.front() <= right.front()) {
			result.push_back(left.front());
			left.pop_front();
		} else {
			result.push_back(right.front());
			right.pop_front();
		}
	}

	while (!left.empty()) {
		result.push_back(left.front());
		left.pop_front();
	}

	while (!right.empty()) {
		result.push_back(right.front());
		right.pop_front();
	}

	return result;
}

void PmergeMe::SortList(std::list<int> &list) {
	if (list.empty() || list.size() == 1) {
		return;
	}

	// Split the list into two sublists
	std::list<int> left, right;
	size_t count = 0;
  	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it) {
		if (count < list.size() / 2)
			left.push_back(*it);
		else
			right.push_back(*it);
		count++;
	}

	// Recursively sort the sublists
	SortList(left);
	SortList(right);

	// Merge the sorted sublists into a single sorted list
	list = MergeList(left, right);
}

double PmergeMe::Sorter(char **argv) {
	std::clock_t s, e;
	double v_time, l_time;

	for (int i = 1; argv[i]; i++) {
		if (argv[i][0] == '-')
			throw std::invalid_argument("Error");
		if (CheckIsNum(argv[i])) {
			vector.push_back(atoi(argv[i]));
			list.push_back(atoi(argv[i]));
		}
		else
			throw std::invalid_argument("Error");
    }

	std::cout << "Before: ";

	if (vector.size() <= (size_t)5) {
		for (size_t i = 0; i < vector.size(); i++)
			std::cout << vector[i] << " ";
		std::cout << std::endl;
    } else {
		for (size_t i = 0; i < 5; i++)
			std::cout << vector[i] << " ";
		std::cout << "[...]" << std::endl;
    }

	s = std::clock();
    SortVector(vector, 0, vector.size() - 1, vector.size() / 4);
	e = std::clock();
	v_time = (double)(e - s) / CLOCKS_PER_SEC * 1000;
	s = std::clock();
    SortList(list);
	e = std::clock();
	l_time = (double)(e - s) / CLOCKS_PER_SEC * 1000;

	std::cout << "After:  ";

    if (vector.size() <= (size_t)5) {
		for (size_t i = 0; i < vector.size(); i++)
			std::cout << vector[i] << " ";
		std::cout << std::endl;
	} else {
		for (size_t i = 0; i < 5; i++)
			std::cout << vector[i] << " ";
		std::cout << "[...]" << std::endl;
    }
	
	std::cout << "Time to process a range of " << vector.size()<< " elements with std::vector: " << (double)v_time << " us" << std::endl;
	std::cout << "Time to process a range of " << vector.size() <<" elements with std::list: " << (double)l_time << " us" << std::endl;
	return 0;
}