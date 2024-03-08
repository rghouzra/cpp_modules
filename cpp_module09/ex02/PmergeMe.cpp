//
// Created by reda on Thu Mar  7 15:02:02 2024
//
#include "PmergeMe.hpp"


/*
    * store elements in a list
*/
PmergeMe::PmergeMe(char **av)
{
    int i = 0;
    while (av[i])
    {
        int number;
        number = atoi(av[i]);
        if(number < 0)
            throw std::runtime_error("only positive integers");
        deq.push_back(number);
        vec.push_back(number);
        i++;
    }
}


PmergeMe::~PmergeMe()
{}

/*---UTILS---*/

void swap(int &a, int &b){
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}
/*
    * get jacobsthal number
*/
int JacobsthalNumber(int n){
    if(n==0 || n == 1)
        return n;
    return JacobsthalNumber(n - 1) + 2 * JacobsthalNumber(n - 2);
}
/*---UTILS---*/



template<typename Cont>
void sort_pairs(Cont&pairs, size_t index){
        if(index >= pairs.size())
            return ;
        for (int j = 0; j < (int)pairs.size() - 1; ++j){
            if(pairs[j].first > pairs[j+1].first){
                int tmpfirst, tmpsecond;

                tmpfirst = pairs[j].first;
                tmpsecond = pairs[j].second;
                pairs[j].first = pairs[j + 1].first;
                pairs[j].second = pairs[j + 1].second;
                pairs[j + 1].first = tmpfirst;
                pairs[j + 1].second = tmpsecond;
            }
        }
    sort_pairs(pairs, index + 1);
}

template<typename Cont, typename Pairs>
int generatePairs(const Cont &c, Pairs &pairs){
    size_t size = c.size();
    int struggler;

    struggler = (size & 1 ? c[size - 1]: -1);
    size -= (size & 1);
    for (size_t i = 0; i < size; i+=2){
        pairs.push_back(std::make_pair(c[i], c[i + 1]));
    }
    for (size_t i = 0; i < pairs.size(); i++){
        if(pairs[i].second > pairs[i].first){
          swap(pairs[i].first, pairs[i].second);
        }
    }
    sort_pairs(pairs, 0);
    return struggler;
}
/*
    *merge main chain and pend
*/
template<typename T1, typename T2>
void mergepairs(T1 &Mainchain, const T2 &pairs){
    T1 jacobSthal;
    T1 pend;

    Mainchain.push_back(pairs[0].second);
    for (size_t i = 1; i < pairs.size(); i++){
        Mainchain.push_back(pairs[i].first);
        pend.push_back(pairs[i].second);
    }
    for (size_t i = 0; i < pend.size(); i++){
        jacobSthal.push_back(JacobsthalNumber(i));
    }
    for (size_t i = 0; i < jacobSthal.size(); i++){
        std::cout << jacobSthal[i] << '\n';
    }

    std::cout << "------------------------------------------\n";
}


/*
    *ford jhonson algorithm
*/
void PmergeMe::FordJohnsonAlgorithm(){
    std::vector<std::pair<int, int> > vecpairs;
    std::deque<std::pair<int, int> > deqpairs;
    std::vector<int> chainV;
    std::deque<int > chainD;
    int vstruggler;
    int dstruggler;

    vstruggler = generatePairs(vec, vecpairs);
    dstruggler =  generatePairs(deq, deqpairs);
    mergepairs(chainV, vecpairs);
    mergepairs(chainD, deqpairs);
}
