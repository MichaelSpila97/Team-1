#pragma once
#include <vector>
#include <algorithm>
#include <iterator>
#include <unordered_map>


// Priority queue with random access

typedef std::pair<int,int> Point;



class p_queue
{
    public:
        p_queue(int width, int height);
        p_queue& operator=(p_queue& a);
        bool lessPriority(std::pair<Point, int> &p1, std::pair<Point, int> &p2);
        void push_up_heap(int index);
        void push_down_heap(int index);
        void swap_nodes(int a, int b);
        void insert(Point& x, int p);
        Point& pop();
        void ndelete(Point& P);
        Point& top();
        bool empty();
        bool contains(Point& key);
        bool compPoints(Point& a, Point& b);
        int getSize();
        std::vector<std::pair<Point,int>>* getContainer();
        int getLeftNode(int currpos);
        int getRightNode(int currpos);
        int getParent(int currpos);
        void print_pque();

    private:
        std::vector<std::pair<Point, int>>* container;
        std::vector<std::vector<int>> indirection;
};
