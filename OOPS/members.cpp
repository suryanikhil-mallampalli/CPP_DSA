#include <bits/stdc++.h>
using namespace std;
  
class Employee {  
    public:
        string id, name;
        int years;  
         
        Employee(string id, string name, int years) {
            this->id = id;
            this->name = name;
            this->years = years;
        }
        void work();
};

void Employee::work() {
    cout << "Employee: " << this->id << " is working\n";
}
  
int main()
{
    Employee emp("STP123","kireeti",3);
    
    emp.work();
    return 0;
}