#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>

class PmergeMe {
    private :
        std::vector<int>	vector;
        std::list<int>		list;
    public :
        PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();
        void			Print();
        double			Sorter(char **argv);
        int				CheckIsNum(char *str);
        
        void			SortVector(std::vector<int> &vector, int left, int right, int k);
        void			InsertionSortVector(std::vector<int> &vector, int left, int right);
        void			MergeVector(std::vector<int> &vector, int left, int mid, int right);

        void			SortList(std::list<int> &list);
        std::list<int>	MergeList(std::list<int> &left, std::list<int> &right);
};
#endif