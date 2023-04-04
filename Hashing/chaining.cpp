#include<bits/stdc++.h>
using namespace std;

struct MyHash
{
    int BUCKET;
    list<int> *table;//linked list
    MyHash(int b)
    {
        BUCKET = b;
        table = new list<int>[BUCKET];
    }
    void insert(int key)
    {
        int i = key % BUCKET;
        table[i].push_back(key);
    }
    bool search(int key)
    {
        int i = key % BUCKET;
        for (auto x : table[i])
           if (x == key)
              return true;
        return false;      
    }
    void remove(int key)
    {
        int i = key % BUCKET;
        table[i].remove(key);
    }
};

	// Driver method to test Map class 
	int main() 
	{ 
	    MyHash mh(7);
	    mh.insert(10);
	    mh.insert(20);
	    mh.insert(15);
	    mh.insert(7);
	    cout << mh.search(10) << endl;
	    mh.remove(15);
	    cout << mh.search(15);
	} 