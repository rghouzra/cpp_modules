//
// Created by reda on Thu Mar  7 15:02:02 2024
//
#include "PmergeMe.hpp"
#include <algorithm>


/*
    * store elements
*/
PmergeMe::PmergeMe(char **av)
{
    int i = 0;
    struct timeval start_time, end_time;
    vec_time_used = 0;
    deq_time_used = 0;

    while (av[i])
    {
        int number;
        number = atoi(av[i]);
        if(number < 0)
            throw std::runtime_error("only positive integers");
        gettimeofday(&start_time, NULL);
        deq.push_back(number);
        gettimeofday(&end_time, NULL);
        deq_time_used += time_difference(start_time, end_time);
        gettimeofday(&start_time, NULL);
        vec.push_back(number);
        gettimeofday(&end_time, NULL);
        vec_time_used += time_difference(start_time, end_time);

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

float time_difference(struct timeval start,struct timeval end){
    return (((end.tv_sec - start.tv_sec) * 1000)+ ((float)(end.tv_usec - start.tv_usec) / 1000));
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

template<typename T1>
int getcombination(T1 &pends, int index)
{
    if(index < 0 || index >= (int)pends.size())
        return -1;
    return pends[index];
}


template<typename T1>
void merge(int combination, T1 & main){
    typename T1::iterator pos = std::lower_bound(main.begin(), main.end(), combination);
    main.insert(pos, combination);
}

template<typename T1>
void merge_chain_pends(T1 &main, T1 &pends){
    // int index = 1;
    (void)pends;
    (void)main;
    for (size_t i = 1; i < pends.size(); i++)
        merge(pends[i], main);
}
/*
    *merge main chain and pend
*/
template<typename T1, typename T2>
void mergepairs(T1 &Mainchain, const T2 &pairs){
    T1 pend;

    Mainchain.push_back(pairs[0].second);
    for (size_t i = 0; i < pairs.size(); i++){
        Mainchain.push_back(pairs[i].first);
        pend.push_back(pairs[i].second);
    }
    merge_chain_pends(Mainchain, pend);
}

template<typename T1>
void insert_the_struggler(T1 &main, int struggler){
    typename T1::iterator it = std::lower_bound(main.begin(),main.end(),struggler);
    main.insert(it, struggler);
}

/*
    *ford jhonson algorithm
*/
template <typename T1>
void print_elements(const T1 &container){
    for (size_t i = 0; i < container.size(); i++)
    {
        std::cout << container[i] << "," << '\t';
    }
    std::cout << '\n';
}
void PmergeMe::FordJohnsonAlgorithm(){
    std::vector<std::pair<int, int> > vecpairs;
    std::deque<std::pair<int, int> > deqpairs;
    struct timeval start, end;
    std::vector<int> chainV;
    std::deque<int > chainD;
    int vstruggler;
    int dstruggler;
    /*---vector----*/
    std::cout << "elements of vector:\n";
    print_elements(vec);
    gettimeofday(&start, NULL);
    vstruggler = generatePairs(vec, vecpairs);
    mergepairs(chainV, vecpairs);
    if(vstruggler != -1)
        insert_the_struggler(chainV, vstruggler);
    gettimeofday(&end, NULL);
    vec_time_used += time_difference(start, end);
    /*---deque----*/
    std::cout << "\nelements of deque:\n";
    print_elements(deq);
    gettimeofday(&start, NULL);
    dstruggler =  generatePairs(deq, deqpairs);
    mergepairs(chainD, deqpairs);
    if(dstruggler != -1)
        insert_the_struggler(chainD, dstruggler);
    gettimeofday(&end, NULL);
    deq_time_used += time_difference(start, end);
    /********/
    std::cout << "\n\n\nafter sort:\nelements of vector:\n";
    print_elements(chainV);
    std::cout << "\nelements of deque:\n";
    print_elements(chainD);
    std::cout << "\n\n\n\n\n";
    std::cout << "time taken by vector to store and sort is: " <<vec_time_used ;
    std::cout << "\ntime taken by deque to store and sort is: " <<deq_time_used ;
}

